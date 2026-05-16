#!/bin/bash
# 🛠️ setup_env.sh - Bütünsel Zanaatkar Çalışma Alanı Kurulumu

echo "[*] Calisma alani hazirlaniyor..."

# Gerekli araçların kontrolü
command -v gcc >/dev/null 2>&1 || { echo >&2 "[!] GCC yuklu degil. Kurulum yapmaniz onerilir."; }
command -v g++ >/dev/null 2>&1 || { echo >&2 "[!] G++ yuklu degil. Kurulum yapmaniz onerilir."; }
command -v python3 >/dev/null 2>&1 || { echo >&2 "[!] Python3 yuklu degil. Kurulum yapmaniz onerilir."; }

# Dizin izinlerini düzenleme
chmod +x ../src/phase-02-systems/sys_monitor.sh
chmod +x ../src/phase-02-systems/network_node.py
chmod +x ../src/phase-03-robotics-ai/ai_agent.py

# Assets dizini hazırlığı
mkdir -p ../assets/images
mkdir -p ../assets/diagrams

echo "[+] Kurulum tamamlandi. Yolculuga hazirsiniz, Zanaatkar."
