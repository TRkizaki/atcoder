use std::io::{self, BufRead};

fn main() {
    let stdin = io::stdin();
    let mut s = String::new();
    stdin.lock().read_line(&mut s).unwrap();
    
    let af = "ABCDEF".chars().collect::<Vec<_>>();
    let mut c = [0; 6];
    for ch in s.chars() {
        for i in 0..6 {
            if ch == af[i] {
                c[i] += 1;
            }
        }
    }
    
    let ans = c.iter().map(|&x| x.to_string()).collect::<Vec<_>>().join(" ");
    println!("{}", ans);
}