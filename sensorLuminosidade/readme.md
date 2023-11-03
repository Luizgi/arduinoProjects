# Controle de Luz com Sensor LDR e Arduino

Neste projeto, você aprenderá a controlar uma luz usando um Sensor LDR (Light-Dependent Resistor) e um Arduino. Vamos explicar a configuração física e o código passo a passo.

## Configuração Física

### Materiais Necessários

- Arduino Uno
- Sensor LDR (Light-Dependent Resistor)
- LED (ou qualquer outra luz)
- Resistor de 220 ohms
- Jumpers

### Instruções

1. Conecte o Sensor LDR:
   - Conecte um dos pinos do Sensor LDR a um dos pinos analógicos do Arduino (por exemplo, A0).
   - Conecte o outro pino do Sensor LDR a um trilho da protoboard.

2. Conecte a Luz (LED):
   - Conecte um LED (ou outra luz) a um resistor de 220 ohms para limitar a corrente.
   - Conecte o ânodo (perna mais longa) do LED ao pino 13 do Arduino.
   - Conecte o cátodo (perna mais curta) do LED ao trilho da protoboard onde você conectou o Sensor LDR.

3. Alimentação e Terra:
   - Conecte o fio de alimentação (+5V) do Arduino a um trilho da protoboard.
   - Conecte o fio de terra (GND) do Arduino a outro trilho da protoboard.

Agora, a configuração física está pronta.