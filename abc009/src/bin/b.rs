use proconio::input;

fn main() {
    // Read input values into variables
    input! {
        n: usize,  // Read one usize
        mut a: [i64; n],  // Read n i64s into a vector
    };
    
    // Sort the vector and remove duplicates
    a.sort_by_key(|&x| -x);
    a.dedup(); //deduplication
    
    // Find the second largest element in the vector
    let ans = a[1];
    
    // Print the answer
    println!("{}", ans);
}