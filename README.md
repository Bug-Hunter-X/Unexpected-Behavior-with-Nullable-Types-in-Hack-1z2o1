# Unexpected Behavior with Nullable Types in Hack

This repository demonstrates an uncommon code error or bug in Hack related to nullable types.  The core issue revolves around the interaction of nullable types with functions that expect non-nullable arguments. While a direct null assignment might trigger a runtime exception, certain workarounds, such as explicit type casts, can lead to surprising and potentially problematic outcomes.

The `bug.hh` file contains a code sample that reproduces the issue. The `bugSolution.hh` file provides a solution to avoid these types of issues.

## How to Reproduce

1. Clone this repository.
2. Compile and run the `bug.hh` file. Observe the output, including the potential runtime exceptions or unexpected behavior based on the different ways of handling nullable inputs.

## Solution

The `bugSolution.hh` file shows a robust way of handling nullable types, avoiding the pitfalls of unexpected behavior. This demonstrates best practices for managing null values and ensuring type safety.