# Display LCD 16x2 com Arduino

Neste projeto, você aprenderá a usar um display LCD 16x2 com Arduino para exibir informações. Vamos explicar a configuração física e o código passo a passo.

## Configuração Física

### Materiais Necessários

- Arduino Uno
- Display LCD 16x2
- Potenciômetro (para ajustar o contraste do LCD)
- Jumpers

### Instruções

1. Conecte o Display LCD:
   - Conecte o pino VSS (GND) do LCD ao terra (GND) do Arduino.
   - Conecte o pino VDD (5V) do LCD a +5V do Arduino.
   - Conecte o pino V0 do LCD ao potenciômetro (ajuste de contraste).
   - Conecte o pino RS do LCD ao pino 12 do Arduino.
   - Conecte o pino RW do LCD ao terra (GND) do Arduino.
   - Conecte o pino E do LCD ao pino 11 do Arduino.
   - Conecte os pinos D4 a D7 do LCD aos pinos 5, 4, 3 e 2 do Arduino, respectivamente.

2. Conecte o potenciômetro:
   - Conecte o pino central do potenciômetro (wiper) ao pino V0 do LCD.
   - Conecte os outros dois pinos do potenciômetro a +5V e GND do Arduino.

3. Conecte o Arduino a um computador via USB para alimentação e comunicação.
