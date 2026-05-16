import socket
import sys

# 🛰️ network_node.py - Bütünsel Zanaatkar Ağ Düğümü
# Sistemlerin birbiriyle olan "bağlantısallığını" temsil eder.

def start_node(host='127.0.0.1', port=65432):
    """Basit bir TCP sunucu düğümü başlatır."""
    print(f"[*] Ag Dugumu baslatiliyor: {host}:{port}")
    
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        try:
            s.bind((host, port))
            s.listen()
            print("[*] Dugum dinlemede... (Leonardo Vizyonu)")
            
            while True:
                conn, addr = s.accept()
                with conn:
                    print(f"[+] Baglanti kabul edildi: {addr}")
                    data = conn.recv(1024)
                    if not data:
                        break
                    print(f"[!] Gelen Veri: {data.decode()}")
                    conn.sendall(b"Dugum mesaji aldi: Baglantisallik dogrulandi.")
        except KeyboardInterrupt:
            print("\n[!] Dugum kapatiliyor. (Stoaci Cikis)")
        except Exception as e:
            print(f"[X] Hata: {e}")

if __name__ == "__main__":
    start_node()
