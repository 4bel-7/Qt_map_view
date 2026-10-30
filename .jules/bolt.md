## 2023-10-31 - QgsMapCanvas Performance
**Learning:** QgsMapCanvas by default may not have parallel rendering enabled in custom applications, which is a key performance feature in QGIS.
**Action:** Always consider enabling parallel rendering (`setParallelRenderingEnabled(true)`) when initializing a new QgsMapCanvas to improve drawing speed.
