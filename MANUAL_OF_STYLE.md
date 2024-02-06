# MANUAL OF STYLE

Keep in mind, a whole lot of this is based off of the Linux kernel coding standards, as
they are an excellent base for readability and mantainability, but this is a little more
relaxed with certain conventions.

## FUNCTIONS

### Spacing
```c
int main() {

    // some logic here

}
```
Always leave at least one return key worth of space for under and above any function declaration,
conditional loop, struct, or enum.

### Brackets
Either
```c
int main() {

  // logic

}
```
**OR**
```c
int main()
{

  //logic

}
```
is fine, just please try to keep it consistent with the rest of the file.
