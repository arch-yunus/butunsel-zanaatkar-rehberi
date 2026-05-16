import random
import time

# 🧠 ai_agent.py - Bütünsel Zanaatkar Yapay Zeka Ajanı
# Tesla'nın "beynim sadece bir alıcıdır" vizyonuyla veriyi işler.

class ArtisanAgent:
    def __init__(self, name):
        self.name = name
        self.knowledge_base = ["Stoicism", "C Pointers", "System Arch", "PID Control"]
        print(f"[*] Ajan {self.name} aktif edildi. (Tesla Modu)")

    def perceive(self):
        """Çevreden veri alımı simülasyonu."""
        signals = ["Error", "Success", "Latency", "Entropy"]
        return random.choice(signals)

    def think(self, signal):
        """Veriyi felsefi ve teknik süzgeçten geçirme."""
        print(f"[Thinking] Gelen Sinyal: {signal}")
        if signal == "Error":
            return "Stoaci Sukunet: Hatayi analiz et ve koda don."
        elif signal == "Entropy":
            return "Sinan Statigi: Altyapiyi guclendir."
        else:
            return "Torvalds Pragmatizmi: Ilerlemeye devam et."

    def act(self, decision):
        """Kararı eyleme dökme."""
        print(f"[Action] Karar: {decision}")
        time.sleep(1)

if __name__ == "__main__":
    agent = ArtisanAgent("Tesla-Core-v1")
    for _ in range(5):
        signal = agent.perceive()
        decision = agent.think(signal)
        agent.act(decision)
        print("-" * 30)
