# Q4. Entry and Exit Controlled Loops

## Entry controlled loop
- The condition is checked **before** the loop body runs.
- If the condition is false at the start, the body runs **zero times**.
- Examples: `for` loop and `while` loop.

```c
int i = 1;
while (i <= 5) {      // condition checked first
    printf("%d ", i);
    i++;
}
```

## Exit controlled loop
- The condition is checked **after** the loop body runs.
- The body always runs **at least once**, even if the condition is false.
- Example: `do-while` loop.

```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5);     // condition checked at the end (note the semicolon)
```

## Difference

| Entry controlled (for, while) | Exit controlled (do-while) |
|---|---|
| Condition checked before the body | Condition checked after the body |
| May run 0 times | Runs at least once |
| No semicolon after `while(cond)` | Semicolon after `while(cond);` |

Example: with `i = 10` and condition `i <= 5`, `while` prints nothing but `do-while` prints `10` once.
