

**`va_list` is neither guaranteed to be a pointer nor a container.**
It is an **opaque type** defined by the C implementation.
- On some systems it **is a pointer**
- On others it may be a **struct or array**
- You must treat it as a **black box** and only use it with `va_start`, `va_arg`, `va_copy`, and `va_end`

Anything else is **undefined behavior**.


## Typical implementation (simplified)

In `<stdarg.h>` you’ll often see:

* This is called va_list, va_start macro 

```C
typedef __builtin_va_list va_list;

#define va_start(ap, last) __builtin_va_start(ap, last)
#define va_arg(ap, type)   __builtin_va_arg(ap, type)
#define va_end(ap)         __builtin_va_end(ap)

```