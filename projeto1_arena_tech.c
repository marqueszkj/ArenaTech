int main() {

    int participantes;
    int jogadoresPorTime;
    int computadores;

    float potencia;
    float duracao;
    float precoKwh;
    float precoKit;
    float outrosCustos;

    int times;
    float consumo;
    float custoEnergia;
    float custoAlimentacao;
    float custoTotal;
    float custoPorParticipante;

    printf("Quantidade de participantes: ");
    scanf("%d", &participantes);

    printf("Quantidade de jogadores por time: ");
    scanf("%d", &jogadoresPorTime);

    printf("Quantidade de computadores: ");
    scanf("%d", &computadores);

    printf("Potencia de cada computador (W): ");
    scanf("%f", &potencia);

    printf("Duracao do evento (horas): ");
    scanf("%f", &duracao);

    printf("Preco do kWh: R$ ");
    scanf("%f", &precoKwh);

    printf("Preco do kit de alimentacao: R$ ");
    scanf("%f", &precoKit);

    printf("Outros custos: R$ ");
    scanf("%f", &outrosCustos);

    times = ceil((float) participantes / jogadoresPorTime);

    consumo = (computadores * potencia * duracao) / 1000;

    custoEnergia = consumo * precoKwh;

    custoAlimentacao = participantes * precoKit;

    custoTotal = custoEnergia + custoAlimentacao + outrosCustos;

    custoPorParticipante = custoTotal / participantes;

    printf("\n===== ARENA TECH =====\n");

    printf("Quantidade de times: %d\n", times);
    printf("Consumo de energia: %.2f kWh\n", consumo);
    printf("Custo da energia: R$ %.2f\n", custoEnergia);
    printf("Custo da alimentacao: R$ %.2f\n", custoAlimentacao);
    printf("Custo total: R$ %.2f\n", custoTotal);
    printf("Custo por participante: R$ %.2f\n", custoPorParticipante);

    return 0;
}