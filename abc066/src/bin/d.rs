//185 ms	6400 KB

use self::mod_combin::ModCombin;
use proconio::input;

fn main() {
    input! {
        n: usize,
        a: [usize; n + 1],
    };
    let mut map = std::collections::BTreeMap::new();
    for &a_i in a.iter() {
        *map.entry(a_i).or_insert(0) += 1;
    }
    let x = *map.iter().find(|(_, &v)| v == 2).unwrap().0;
    let l = a.iter().position(|&a_i| a_i == x).unwrap();
    let r = a.iter().rposition(|&a_i| a_i == x).unwrap();
    let mc = ModCombin::new(n + 1);
    for k in 1..=n + 1 {
        let ans = mc.combination(n + 1, k) - mc.combination(l + n - r, k - 1);
        println!("{}", ans);
    }
}

mod mod_u32 {
    #[derive(Clone, Copy, Debug, Eq, PartialEq)]
    pub struct ModU32(u32);

    const MODP: u32 = 1_000_000_007;

    impl ModU32 {
        pub fn inv(self) -> Self {
            if self.0 == 0 {
                panic!()
            };
            self.pow(MODP - 2)
        }

        pub fn new(x: u64) -> Self {
            Self((x % (MODP as u64)) as u32)
        }

        pub fn pow(self, exp: u32) -> Self {
            let mut b: ModU32 = self;
            let mut a: ModU32 = Self::new(1);
            let mut x = exp;
            while x > 1 {
                if x & 1 == 1 {
                    a *= b;
                }
                x /= 2;
                b *= b;
            }
            if x == 1 {
                a *= b;
            }
            a
        }
    }

    impl From<u32> for ModU32 {
        fn from(x: u32) -> Self {
            ModU32::new(x as u64)
        }
    }

    impl From<u64> for ModU32 {
        fn from(x: u64) -> Self {
            ModU32::new(x)
        }
    }

    impl From<usize> for ModU32 {
        fn from(x: usize) -> Self {
            ModU32::from(x as u64)
        }
    }

    impl Into<u32> for ModU32 {
        fn into(self) -> u32 {
            self.0
        }
    }

    impl Into<u64> for ModU32 {
        fn into(self) -> u64 {
            self.0 as u64
        }
    }

    impl Into<usize> for ModU32 {
        fn into(self) -> usize {
            self.0 as usize
        }
    }

    impl std::fmt::Display for ModU32 {
        fn fmt(&self, f: &mut std::fmt::Formatter) -> std::fmt::Result {
            write!(f, "{}", self.0)
        }
    }

    impl std::ops::Add<ModU32> for ModU32 {
        type Output = ModU32;

        fn add(self, rhs: ModU32) -> Self::Output {
            (self.0 as u64 + rhs.0 as u64).into()
        }
    }

    impl std::ops::AddAssign<ModU32> for ModU32 {
        fn add_assign(&mut self, rhs: ModU32) {
            self.0 = (*self + rhs).0
        }
    }

    impl std::ops::Sub<ModU32> for ModU32 {
        type Output = ModU32;

        fn sub(self, rhs: ModU32) -> Self::Output {
            (if self.0 < rhs.0 {
                self.0 + (MODP - rhs.0)
            } else {
                self.0 - rhs.0
            })
            .into()
        }
    }

    impl std::ops::SubAssign<ModU32> for ModU32 {
        fn sub_assign(&mut self, rhs: ModU32) {
            self.0 = (*self - rhs).0
        }
    }

    impl std::ops::Mul<ModU32> for ModU32 {
        type Output = ModU32;

        fn mul(self, rhs: ModU32) -> Self::Output {
            Self::new((self.0 as u64) * (rhs.0 as u64))
        }
    }

    impl std::ops::MulAssign<ModU32> for ModU32 {
        fn mul_assign(&mut self, rhs: ModU32) {
            self.0 = (*self * rhs).0
        }
    }

    impl std::ops::Div<ModU32> for ModU32 {
        type Output = ModU32;

        fn div(self, rhs: ModU32) -> Self::Output {
            self * rhs.inv()
        }
    }

    impl std::ops::DivAssign<ModU32> for ModU32 {
        fn div_assign(&mut self, rhs: ModU32) {
            self.0 = (*self / rhs).0
        }
    }
}

mod mod_combin {
    use super::mod_u32::ModU32;

    pub struct ModCombin {
        factv: Vec<ModU32>,
        finvv: Vec<ModU32>,
    }

    impl ModCombin {
        pub fn new(max: usize) -> Self {
            let mut factv: Vec<ModU32> = vec![ModU32::new(0); max + 1];
            let mut finvv: Vec<ModU32> = vec![ModU32::new(0); max + 1];
            factv[0] = ModU32::new(1);
            for i in 1..=max {
                factv[i] = factv[i - 1] * ModU32::new(i as u64)
            }
            finvv[max] = factv[max].inv();
            for i in (1..=max).rev() {
                finvv[i - 1] = finvv[i] * ModU32::new(i as u64);
            }
            Self { factv, finvv }
        }

        pub fn combination(&self, n: usize, r: usize) -> ModU32 {
            if n < r {
                return ModU32::new(0);
            }
            self.factv[n] * self.finvv[r] * self.finvv[n - r]
        }
    }
}
