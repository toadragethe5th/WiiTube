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

## FILE NAMING

### NAMES
The names should reflect what the file does, and be short and concise.

Good Name:
`search.c`
Bad name:
`filethatsearchesyoutubetofindthingsanddisplaysthem.c`

### SPACES
**PLEASE DON'T PUT SPACES IN FILES!** THEY DO NOT BELONG!
follow the general naming scheme, so instead of `bad name.c`:

- `bad_name.c`
- `bad-name.c`
- `badName.c`