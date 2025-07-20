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
  * [%c] :      [Single character] -->	[printf("%c", 'A'); → A]
  * [%s] :      [String] --> [printf("%5s", "hi"); → hi]
  * [%p] :      [Pointer address (hex)]	--> [printf("%p", ptr); → 0x7ffe...]
  * [%d/%i] :   [Signed decimal integer]	--> [printf("%d", -42); → -42]
  * [%u] :      [Unsigned decimal integer] --> [printf("%u", 42); → 42]
  * [%x/%X] :   [Unsigned hex (lower/upper)]	--> [printf("%#08x", 255); → 0x0000ff]
  * [%%]  :     [Literal percent sign]	--> [printf("%%"); → %]

_________________________________________________________________________
🔧 Key Features to Implement:
_________________________________________________________________________

1- Flags:

 * (-) (left‑justify).

 * (0) (pad with zeros).

 * (+) (always show sign).

 * (space) (prepend space for positives).

 * (#) (alternate form for %x, %X, %o).

2- Field Width & Precision:

 * Minimum field width (number or *).

 * Precision for numbers (. + number or *) and strings.

3- Length Modifiers (often optional):

 * hh, h, l, ll (to handle char, short, long, long long).

4- Variadic Argument Handling:

 * Use va_start, va_arg, va_end.

 * Be careful to fetch the correct type for each specifier.

5- Buffering & Output:

 * You can print directly with write(1, …) or build a buffer and flush.

________________________________________________________________________
🏗️ Typical File Layout:
________________________________________________________________________

        ft_printf/
        ├── include/
        │   └── ft_printf.h
        ├── srcs/
        │   ├── ft_printf.c          # entry point
        │   ├── parse_format.c       # parse flags, width, prec, spec
        │   ├── print_handlers.c     # handlers for each specifier
        │   ├── utils.c              # integer-to-string, padding, etc.
        │   └── ...
        └── Makefile

Example Prototype:

        int ft_printf(const char *format, ...);

_________________________________________________________________________
🚩 Common Pitfalls:
_________________________________________________________________________

  * Order of flag application (e.g. 0 is ignored if - is present).

  * Negative numbers with zero‑padding.

  * Precision vs. width interactions.

  * Proper return value: total number of characters printed.

________________________________________________________________________
✅ Success Criteria:
________________________________________________________________________

  * All mandatory specifiers work exactly like printf.

  * Flags, width, precision behave correctly in edge cases (e.g. zero/NULL).

  * No memory leaks (if you allocate).

  * Robust parsing: invalid format strings should not crash.
