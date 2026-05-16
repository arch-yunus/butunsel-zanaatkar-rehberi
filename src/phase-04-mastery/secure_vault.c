/**
 * @file secure_vault.c
 * @brief Phase 04: Mastery - Secure Data Infrastructure.
 * 
 * Sinan'ın Statik Sağlamlığı + Torvalds'ın Veri Yapısı Disiplini.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 10
#define SECRET_KEY 0xAA

typedef struct {
    int id;
    char data[64];
    unsigned char checksum;
} Record;

unsigned char calculate_checksum(const char *str) {
    unsigned char sum = 0;
    while (*str) sum ^= *str++;
    return sum ^ SECRET_KEY;
}

void build_secure_vault(Record *vault) {
    printf("[*] Sinan Statigi ile temel atiliyor...\n");
    for (int i = 0; i < MAX_RECORDS; i++) {
        vault[i].id = i + 1;
        sprintf(vault[i].data, "Miras Verisi #%d", vault[i].id);
        vault[i].checksum = calculate_checksum(vault[i].data);
    }
}

void verify_integrity(Record *vault) {
    printf("\n[*] Torvalds Disiplini ile veri dogrulaniyor...\n");
    for (int i = 0; i < MAX_RECORDS; i++) {
        unsigned char current_sum = calculate_checksum(vault[i].data);
        if (current_sum == vault[i].checksum) {
            printf("[PASS] Kayit %d: Saglam ve Guvenli. (Checksum: 0x%02X)\n", 
                   vault[i].id, current_sum);
        } else {
            printf("[FAIL] Kayit %d: VERI BOZULMASI TESPIT EDILDI!\n", vault[i].id);
        }
    }
}

int main() {
    printf("=== BUTUNSEL ZANAATKAR: GUVENLI MAHZEN ===\n\n");

    Record *vault = (Record *)malloc(sizeof(Record) * MAX_RECORDS);
    if (!vault) return 1;

    build_secure_vault(vault);
    verify_integrity(vault);

    // Bir kaydı bozarak testi simüle edelim (Deprem Testi)
    printf("\n[!] Sisteme dis mudahale simule ediliyor...\n");
    strcpy(vault[2].data, "BOZUK VERI");
    
    verify_integrity(vault);

    free(vault);
    return 0;
}
