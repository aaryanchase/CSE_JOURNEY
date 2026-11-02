# Q5. Ternary Operator

The ternary operator `? :` is the only operator in C that works on **three operands**.
It is a short form of `if-else`.

## Syntax
```c
condition ? expression1 : expression2;
```
- If `condition` is true, `expression1` is evaluated.
- If `condition` is false, `expression2` is evaluated.

## Example
```c
int a = 10, b = 20;
int max = (a > b) ? a : b;   // max = 20
```

## Same thing using if-else
```c
if (a > b)
    max = a;
else
    max = b;
```

## Uses
- Finding the larger or smaller of two numbers
- Checking odd or even: `(n % 2 == 0) ? "Even" : "Odd"`
- Writing short, simple decisions in one line
