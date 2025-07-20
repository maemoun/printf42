___________________________________________________________________________
🏆 PRINTF :
___________________________________________________________________________

The ft_printf project at 42/1337 is a re‑implementation of the standard C library’s printf function. Its purpose is to deepen your understanding of:

  * Variadic functions (stdarg.h).

  * Format-string parsing.

  * Type handling (integers, strings, pointers, hex, etc.).

  * Output buffering and edge‐case management.

__________________________________________________________________________
🎯 Project Goals:
__________________________________________________________________________

  1- Parse a format string (e.g. "%05d %-10s %#x\n").

  2- Extract flags, width, precision, length modifiers, and conversion specifiers.

  3- Fetch each argument from the variadic argument list.

  4- Format it according to the parsed rules.

  5- Write the result to stdout (or a given file descriptor in some bonus versions).

________________________________________________________________________
⚙️ Core Specifiers You Must Support:
________________________________________________________________________

[Specifier] --> [Meaning] --> [Example]:
  * [%c] :  [Single character] -->	[printf("%c", 'A'); → A]
  * [%s] :  [String] --> [printf("%5s", "hi"); → hi]
  * [%p] :  [Pointer address (hex)]	--> [printf("%p", ptr); → 0x7ffe...]
  * [%d/%i] :  [Signed decimal integer]	--> [printf("%d", -42); → -42]
  * [%u] :  [Unsigned decimal integer] --> [printf("%u", 42); → 42]
  * [%x/%X] :  [Unsigned hex (lower/upper)]	--> [printf("%#08x", 255); → 0x0000ff]
  * [%%]  :  [Literal percent sign]	--> [printf("%%"); → %]
