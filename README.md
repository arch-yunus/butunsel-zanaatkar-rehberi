# 🌐 Bütünsel Zanaatkar Rehberi (Holistic Artisan Roadmap)

> **"Gelişim = (Zihinsel Disiplin x Saha Pratiği)^Karakter Derinliği"**

Bu depo; teorik bilginin pratikle, zihinsel disiplinin mühendislikle ve vizyonun sahadaki terle birleştiği bir **üst-gelişim manifestosudur**. Modern dünyanın sunduğu "parçalı uzmanlık" yanılgısına karşı; zihni, donanımı, kodu ve mimariyi tek bir "Zanaat" (Craft) olarak ele alır. Bu rehber, bir mühendisin sadece kod yazan bir operatör değil, bir sistem mimarı ve düşünür-zanaatkar (Polymath-Artisan) olma yolculuğudur.

---

## 🏛️ Beş Büyük Usta ve Ontolojik Temeller

Bu rehberin felsefesi, insanlık tarihinin teknik ve zihinsel zirvelerini temsil eden beş büyük ustanın mirası üzerine inşa edilmiştir. Her usta, gelişim piramidinin bir katmanını temsil eder:

### 1. Marcus Aurelius: Zihinsel İşletim Sistemi (Inner Citadel)
Roma İmparatoru ve Stoacı filozof Aurelius, dış dünyadaki kaosu yönetebilmek için önce "İçsel Kale"yi inşa etmeyi emreder.
*   **Doktrin:** Duygusal tepkilerin kontrolü, kriz anında Stoacı sükunet ve Monk Mode (Keşiş Modu) odaklanması.
*   **Aksiyon:** Kod derlenmediğinde veya sistem çöktüğünde öfke değil, sadece kontrol edilebilir değişkenlere (algoritma, mantık) odaklanma.
*   [[Doktrin Detayları]](docs/01-philosophy/AURELIUS_DOCTRINE.md)

### 2. Leonardo da Vinci: Bütünsel Görüş (Saper Vedere)
Nihai hezarfen Da Vinci, her şeyin diğer her şeyle bağlantılı olduğu ilkesiyle sistem felsefesini öğretir.
*   **Doktrin:** Anatomi, mekanik ve yazılım arasındaki görünmez bağları görmek. "Görmeyi bilmek."
*   **Aksiyon:** Sadece fonksiyonu değil, o fonksiyonun CPU ısısına ve kullanıcı deneyimine olan etkisini analiz etmek.
*   [[El Kitabı]](docs/01-philosophy/DA_VINCI_HANDBOOK.md)

### 3. Nikola Tesla: Zihinsel Simülasyon (First Principles)
Tesla, bir sistemi fiziksel olarak inşa etmeden önce onu zihninde aylarca çalıştıran tavizsiz disiplinin zirvesidir.
*   **Doktrin:** Temel fizik kurallarıyla (First Principles) düşünme ve mental prototipleme.
*   **Aksiyon:** Koda dokunmadan önce mimariyi zihinsel derleyicide koşturmak, darboğazları önceden görmek.
*   [[Protokol Detayları]](docs/01-philosophy/TESLA_PROTOCOL.md)

### 4. Mimar Sinan: Mimari Sağlamlık (Pergel İlkesi)
Sinan, yüzyıllarca ayakta kalan yapıların sırrını "Sabit Ayak" (Etik/Temel) ve "Hareketli Ayak" (Yenilik) dengesinde bulur.
*   **Doktrin:** "Security by Design" (Tasarım Gereği Güvenlik) ve altyapı dürüstlüğü.
*   **Aksiyon:** Görünen arayüzden önce, sarsılmaz bir veritabanı şeması ve sistem güvenliği inşa etmek.
*   [[Statik Analizi]](docs/01-philosophy/SINAN_STATICS.md)

### 5. Linus Torvalds: Pragmatizm ve Gerçeklik (The Code)
Torvalds, laf kalabalığını reddeder; onun için tek gerçeklik kodun kalitesi ve verinin doğru yapılandırılmasıdır.
*   **Doktrin:** "Talk is cheap. Show me the code." ve veri yapıları disiplini.
*   **Aksiyon:** Gereksiz soyutlamalardan kaçınmak, düşük seviyeli bellek yönetimiyle verimliliği en üst düzeye çıkarmak.
*   [[Manifesto]](docs/01-philosophy/TORVALDS_MANIFESTO.md)

---

## 🛰️ Teknik Stack Matrix ve Uygulama Evreleri

| Evre | Odak Alanı | Ana Dil / Araç | Usta İlkesi |
| :--- | :--- | :--- | :--- |
| **Evre 1** | Temel Bellek ve Mantık | C, Makefile, GDB | Aurelius (Disiplin) |
| **Evre 2** | Sistemler ve Ağ | Bash, Python, Linux Kernel | Da Vinci (Bağlantı) |
| **Evre 3** | Robotik ve Otonomi | C++, OpenCV, PID Control | Tesla (Simülasyon) |
| **Evre 4** | Mimari ve Güvenlik | Rust, Docker, Encryption | Sinan & Torvalds |

### 🌑 [Evre 1: Tabula Rasa - Temeller](docs/02-curriculum/PHASE_01_FUNDAMENTALS.md)
*   **Kapsam:** Stack vs Heap, Pointer Aritmetiği, Manuel Bellek Yönetimi.
*   **Pratik:** [hello_artisan.c](src/phase-01-fundamentals/hello_artisan.c) - Saf C ile bellek ontolojisi.

### 🔗 [Evre 2: Sistemler ve Bağlantısallık](docs/02-curriculum/PHASE_02_SYSTEMS.md)
*   **Kapsam:** System Calls, Sockets, IPC (Inter-Process Communication), Linux Internals.
*   **Pratik:** [sys_monitor.sh](src/phase-02-systems/sys_monitor.sh) & [network_node.py](src/phase-02-systems/network_node.py).

### 🤖 [Evre 3: Robotik, Kontrol ve Yapay Zeka](docs/02-curriculum/PHASE_03_ROBOTICS_AI.md)
*   **Kapsam:** Kontrol Teorisi, Feedback Loops, Edge AI, Sensör Füzyonu.
*   **Pratik:** [pid_controller.cpp](src/phase-03-robotics-ai/pid_controller.cpp) & [ai_agent.py](src/phase-03-robotics-ai/ai_agent.py).

### 🏰 [Evre 4: Ustalık ve Mimari Miras](docs/02-curriculum/PHASE_04_MASTERY.md)
*   **Kapsam:** Dağıtık Sistemler, Cryptography, Open Source Etik, Yüksek Erişilebilirlik.
*   **Pratik:** [secure_vault.c](src/phase-04-mastery/secure_vault.c) - Sarsılmaz veri mahzeni.

---

## 🧘 Zanaatkarın Günlük Protokolü (Daily Routine)

Bu yolu takip eden bir zanaatkarın her günü şu üç sütun üzerine kuruludur:

1.  **Deep Work (Tesla Saati):** Günün en az 4 saati, tüm bildirimler kapalı, telefon uçak modunda, sadece teknik problem çözümü.
2.  **Saper Vedere (Analiz):** Günlük yazılan kodun, sistemin diğer parçalarıyla olan etkileşimini 15 dakika boyunca görselleştirme.
3.  **Pergel Kontrolü (Disiplin):** "Bugün sabit ayağım (temel bilgilerim) sağlam mıydı, yoksa sadece kopyala-yapıştır mı yaptım?" sorgulaması.

---

## 📊 Aksiyon ve Entegrasyon Çerçevesi

Bu rehber bir kitap değil, bir **yaşam alanı**dır. İlerlemenizi şu şekilde dökümante edin:

*   **Haftalık Loglar:** Her hafta sonu `logs/weekly` dizinine o haftaki 5-Usta Testini içeren raporunuzu commit edin. [[Örnek Log]](logs/weekly/WEEK_01_LOG.md)
*   **Kod Katkısı:** Her evredeki "The Mission" (Görev) kısmını tamamlayıp `src` dizininde kendi klasörünüzü oluşturun.
*   **Kurulum:** Çalışma alanınızı tek komutla hazırlayın:
    ```bash
    bash tools/setup_env.sh
    ```

---

## 🚀 Vizyon: Nereye Gidiyoruz?

Bu depo sadece bir yazılım rehberi değildir. Amacımız; uzay teknolojilerinden (VLEO/OSAM), kuantum hesaplamaya, biyoteknolojik arayüzlerden otonom şehirlere kadar geleceği inşa edecek **Bütünsel Zanaatkarlar** yetiştirmektir. 

**"Konuşmak bedavadır. Bize kodu ve inşa ettiğin sistemi göster."**

---
*Bu rehber, sadece öğrenmek için değil, yüzyıllar sonra bile ayakta kalacak bir miras inşa etmek içindir.*