@echo off
"C:\\Program Files\\Unity\\Hub\\Editor\\6000.0.24f1\\Editor\\Data\\PlaybackEngines\\AndroidPlayer\\OpenJDK\\bin\\java" ^
  --class-path ^
  "C:\\Users\\Çağla\\.gradle\\caches\\modules-2\\files-2.1\\com.google.prefab\\cli\\2.0.0\\f2702b5ca13df54e3ca92f29d6b403fb6285d8df\\cli-2.0.0-all.jar" ^
  com.google.prefab.cli.AppKt ^
  --build-system ^
  cmake ^
  --platform ^
  android ^
  --abi ^
  arm64-v8a ^
  --os-version ^
  26 ^
  --stl ^
  c++_shared ^
  --ndk-version ^
  23 ^
  --output ^
  "C:\\Users\\ALA~1\\AppData\\Local\\Temp\\agp-prefab-staging6880139835711083169\\staged-cli-output" ^
  "C:\\Users\\Çağla\\.gradle\\caches\\transforms-3\\4533d298259fc52a43021fce53f5e4a9\\transformed\\jetified-games-activity-3.0.5\\prefab"
