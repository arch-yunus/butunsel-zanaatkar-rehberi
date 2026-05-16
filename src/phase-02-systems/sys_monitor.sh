#!/bin/bash
# 🛰️ sys_monitor.sh - Bütünsel Zanaatkar Sistem Gözlemcisi
# Leonardo da Vinci'nin "Saper Vedere" ilkesiyle sistemin durumunu analiz eder.

LOG_FILE="../../logs/sys_status.log"

echo "========================================"
echo "   SISTEM GOZLEMCI (DA VINCI MODU)      "
echo "========================================"

# Tarih ve Saat
echo "Zaman: $(date)" | tee -a $LOG_FILE

# CPU Yükü
echo "CPU Kullanımı:" | tee -a $LOG_FILE
top -bn1 | grep "Cpu(s)" | \
sed "s/.*, *\([0-9.]*\)%* id.*/\1/" | \
awk '{print "  Bosta: " $1 "% | Kullanim: " 100-$1 "%"}' | tee -a $LOG_FILE

# Bellek Durumu
echo "Bellek Durumu:" | tee -a $LOG_FILE
free -m | awk 'NR==2{printf "  Toplam: %sMB | Kullanilan: %sMB | Bosta: %sMB\n", $2,$3,$4}' | tee -a $LOG_FILE

# Ağ Bağlantıları
echo "Aktif Baglantilar:" | tee -a $LOG_FILE
netstat -tun | grep ESTABLISHED | wc -l | awk '{print "  Established: " $1}' | tee -a $LOG_FILE

echo "----------------------------------------"
echo "Rapor $LOG_FILE dosyasina kaydedildi."
