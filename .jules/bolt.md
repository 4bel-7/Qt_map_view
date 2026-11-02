
## 2024-05-24 - Qt Log Output Optimization
**Learning:** QDebug (including methods like `qCritical()`) natively accepts `const char*` without allocating a `QString`. Wrapping log strings in these functions with `QStringLiteral` is unnecessary, and actually alters the log formatting by adding quotation marks.
**Action:** Do not use `QStringLiteral` when passing string literals to Qt's logging macros (`qDebug`, `qCritical`, etc.).
