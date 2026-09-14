# Arduino Songs

Coleção de melodias em domínio público para tocar em um buzzer piezoelétrico com Arduino usando a função `tone()`.

## Músicas

- `ode-to-joy/ode-to-joy.ino` — Beethoven, **Ode to Joy**
- `fur-elise/fur-elise.ino` — Beethoven, **Für Elise** (tema inicial)
- `jingle-bells/jingle-bells.ino` — James Lord Pierpont, **Jingle Bells**
- `twinkle-twinkle/twinkle-twinkle.ino` — **Twinkle, Twinkle, Little Star**
- `mary-had-a-little-lamb/mary-had-a-little-lamb.ino` — **Mary Had a Little Lamb**

## Circuito

Você precisa de:

- Arduino Uno, Nano ou compatível
- buzzer piezoelétrico passivo
- resistor de 100–220 Ω (recomendado)
- jumpers

Ligação básica:

```text
Arduino D8 ---- resistor ---- (+) buzzer
Arduino GND ---------------- (-) buzzer
```

Todos os exemplos usam o pino digital **8**. Se quiser outro pino, altere `BUZZER_PIN` no sketch.

## Como usar

1. Abra a pasta da música desejada no Arduino IDE.
2. Abra o arquivo `.ino`.
3. Conecte a placa.
4. Selecione a placa e a porta correta.
5. Faça o upload.

A música toca uma vez ao ligar ou reiniciar o Arduino.

## Estrutura

```text
arduino-songs/
├── fur-elise/
├── jingle-bells/
├── mary-had-a-little-lamb/
├── ode-to-joy/
└── twinkle-twinkle/
```

## Observação

As melodias deste repositório foram escolhidas por serem obras em domínio público.
