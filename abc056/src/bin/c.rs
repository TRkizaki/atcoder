use proconio::input;

fn main() {
    input! {
        x: i64,
    };
    let mut t = 0_i64;
    let mut p = 0_i64;
    for i in 0.. {
        if p >= x {
            break;
        }
        p += i;
        t = i;
    }
    let ans = t;
    println!("{}", ans);
}