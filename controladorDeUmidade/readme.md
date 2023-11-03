# Sensor de Umidade do Solo com LEDs e Arduino

Neste projeto, você aprenderá a criar um sistema que utiliza um sensor de umidade do solo para monitorar a umidade do solo e exibir o status em LEDs. Vamos explicar a configuração física e o código passo a passo.

## Configuração Física

### Materiais Necessários

- Arduino Uno
- Sensor de umidade do solo (com saída analógica)
- LEDs (Vermelho, Amarelo e Verde)
- Resistor de 220 ohms (para cada LED)
- Jumpers

### Instruções

1. Conecte o Sensor de Umidade do Solo:
   - Conecte o pino de sinal do sensor (saída analógica) ao pino A0 do Arduino.
   - Conecte o pino GND do sensor ao terra (GND) do Arduino.
   - Conecte o pino VCC do sensor a +5V do Arduino.

2. Conecte os LEDs:
   - Conecte o LED Vermelho ao pino 5 do Arduino com um resistor de 220 ohms.
   - Conecte o LED Amarelo ao pino 6 do Arduino com um resistor de 220 ohms.
   - Conecte o LED Verde ao pino 7 do Arduino com um resistor de 220 ohms.

3. Alimentação:
   - Conecte o Arduino a um computador via USB para alimentação e comunicação.

