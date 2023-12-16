use std::io;

fn main() {
    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read input");
    let n: i32 = input.trim().parse().expect("Invalid input");

    if n < 1 || n > 9 {
        return;
    }

    let result: String = std::iter::repeat(n.to_string()).take(n as usize).collect();

    println!("{}", result);
}
