#include <stdio.h>
#include <string.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    for (int c = 1; c <= t; c++) {
        int n;
        long long k;
        scanf("%d %lld", &n, &k);
        
        char s[150];
        scanf("%s", s);
        
        // Melakukan enkripsi untuk setiap karakter pada string
        for (int i = 0; i < n; i++) {
            // 1. Ubah huruf menjadi angka (a = 0, b = 1, ..., z = 25)
            int val = s[i] - 'a';
            
            // 2 & 3 & 4. Tambahkan K, lalu gunakan modulo 26 karena siklus huruf berulang setiap 26
            val = (val + (k % 26)) % 26;
            
            // 5. Ubah angka kembali menjadi huruf
            s[i] = 'a' + val;
        }
        
        printf("Case #%d: %s\n", c, s);
    }
    
    return 0;
}
