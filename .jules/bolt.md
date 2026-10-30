## 2026-10-30 - [Optimize QString Literals]
**Learning:** In Qt code, replacing string literals with `QStringLiteral` avoids runtime allocation and UTF-8 string conversion, which can be an easy performance win.
**Action:** Always consider using `QStringLiteral` when constructing static string paths or labels in Qt C++ applications.
