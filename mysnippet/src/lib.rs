use cargo_snippet::snippet;

// Annotate snippet name
#[snippet("mymath")]
#[snippet("gcd")]
fn gcd(a: u64, b: u64) -> u64 {
    if b == 0 {
        a
    } else {
        gcd(b, a % b)
    }
}

// Also works
#[snippet(name = "mymath")]
// Equivalent to #[snippet("lcm")]
#[snippet]
fn lcm(a: u64, b: u64) -> u64 {
    a / gcd(a, b) * b
}

#[snippet]
// Include snippet
#[snippet(include = "gcd")]
fn gcd_list(list: &[u64]) -> u64 {
    list.iter().fold(list[0], |a, &b| gcd(a, b))
}

// You can set prefix string.
// Note: All codes will be formatted by rustfmt on output
#[snippet(prefix = "use std::io::{self,Read};")]
#[snippet(prefix = "use std::str::FromStr;")]
fn foo() {}

// By default, doc comments associated with items will be output with the snippet.
#[snippet]
/// This is a document!
fn documented() {
    //! Inner document also works.
}

// If you want doc comment to be hidden, append `doc_hidden` keyword.
#[snippet(doc_hidden, prefix = "use std::collections::HashMap;")]
/// This is a doc comment for `bar`.
/// Since `doc_hidden` is specified, it won't be present in the snippet.
fn bar() {
    //! And this is also a doc comment for `bar`, which will be removed.
}

#[test]
fn test_gcd() {
    assert_eq!(gcd(57, 3), 3);
}

#[test]
fn test_lcm() {
    assert_eq!(lcm(3, 19), 57);
}