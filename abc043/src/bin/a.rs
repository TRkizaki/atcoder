use proconio::input;  // Import the `input` macro from the `proconio` crate.

fn main() {
    input! {  // Use the `input` macro to read in user input.
        n: usize,  // Read in an integer `n` as a `usize`.
    };
    let ans = (1..=n).sum::<usize>();  // Calculate the sum of all integers from 1 to `n`.
    println!("{}", ans);  // Print the sum to the console.
}