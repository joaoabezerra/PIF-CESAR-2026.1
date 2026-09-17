// 23
#include <stdio.h>
int main(void) {
    int h_inicio, m_inicio, s_inicio, duracao_segundos;
    int total_segundos_inicio, total_segundos_fim;
    int h_fim, m_fim, s_fim;
    printf("Digite o horario de inicio (hh mm ss): ");
    scanf("%d %d %d", &h_inicio, &m_inicio, &s_inicio);
    printf("Digite a duracao da experiencia (em segundos): ");
    scanf("%d", &duracao_segundos);
    total_segundos_inicio = (h_inicio * 3600) + (m_inicio * 60) + s_inicio;
    total_segundos_fim = total_segundos_inicio + duracao_segundos;
    total_segundos_fim %= 86400;
    h_fim = total_segundos_fim / 3600;
    m_fim = (total_segundos_fim % 3600) / 60;
    s_fim = total_segundos_fim % 60;
    printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    system("pause");
    return 0;
}
// 24
#include <stdio.h>
#define FATOR_CONVERSAO 3.6f
int main(void) {
    float kmh, ms;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmh);
    ms = kmh / FATOR_CONVERSAO;
    printf("Velocidade equivalente: %.2f m/s\n", ms);
    system("pause");
    return 0;
}
