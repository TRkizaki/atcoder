use proconio::input;

fn main() {
    input! {
        a: usize,
        b: usize,
        c: usize,
    };
   
    let ans = ((a * b)+ (b * c)+ (c * a)) * 2;
    println!("{}", ans);
}