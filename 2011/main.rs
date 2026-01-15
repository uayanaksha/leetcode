impl Solution {
    pub fn final_value_after_operations(operations: Vec<String>) -> i32 {
        let mut X : i32 = 0;
        for operation in operations.iter() {
            match operation.as_str() {
                "X++" | "++X" => { X = X + 1; },
                _ => { X = X - 1; }
            }
        }
        return X;
    }
}
