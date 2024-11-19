/*5-. Con el uso de registros (mínimo 10) elabore un programa que maneje una agenda.

Objetivos personales o profesionales. Citas y fechas importantes. Tareas y actividades a realizar cada día.

VSC ver 1.93.1 octubre 9/2024          Juan Pablo García
*/
#include <stdio.h>
#include <string.h>

struct fecha
{
    int dia;
    int mes;
    int anio;
};

typedef struct 
{   
    char nombre[30];
    char objetivos_personales[100];
    char objetivos_profesionales[100];
    char citas[100];
    fecha fechas_importantes;
    char tareas_diarias[100];
} agenda;


int main(){
    agenda agenda_personal[10];

    printf("A continuacion se registrara la agenda del dia de 10 personas\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\nNombre de la persona: ");
        fgets(agenda_personal[i].nombre, sizeof(agenda_personal[i].nombre), stdin);
        agenda_personal[i].nombre[strcspn(agenda_personal[i].nombre, "\n")] = '\0';

        printf("Objetivo personal: ");
        fgets(agenda_personal[i].objetivos_personales, sizeof(agenda_personal[i].objetivos_personales), stdin);
        agenda_personal[i].objetivos_personales[strcspn(agenda_personal[i].objetivos_personales, "\n")] = '\0';

        printf("Objetivo profesional: ");
        fgets(agenda_personal[i].objetivos_profesionales, sizeof(agenda_personal[i].objetivos_profesionales), stdin);
        agenda_personal[i].objetivos_profesionales[strcspn(agenda_personal[i].objetivos_profesionales, "\n")] = '\0';

        printf("Cita del dia: ");
        fgets(agenda_personal[i].citas, sizeof(agenda_personal[i].citas), stdin);
        agenda_personal[i].citas[strcspn(agenda_personal[i].citas, "\n")] = '\0';

        printf("Fecha importante:");
        printf("\nDia: "); scanf("%i", &agenda_personal[i].fechas_importantes.dia); getchar();
        printf("Mes: "); scanf("%i", &agenda_personal[i].fechas_importantes.mes); getchar();
        printf("Año: "); scanf("%i", &agenda_personal[i].fechas_importantes.anio); getchar();

        printf("Tarea del dia: ");
        fgets(agenda_personal[i].tareas_diarias, sizeof(agenda_personal[i].tareas_diarias), stdin);
        agenda_personal[i].tareas_diarias[strcspn(agenda_personal[i].tareas_diarias, "\n")] = '\0';

        printf("---------------------------------------------");
    }

    //Menu
    char consulta[30];
    printf("\nDe quien desea consultar la agenda: ");
    fgets(consulta, sizeof(consulta), stdin);
    consulta[strcspn(consulta, "\n")] = '\0';

    int encontrado = 0;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(consulta, agenda_personal[i].nombre) == 0)
        {
            printf("\nNombre: %s", agenda_personal[i].nombre);
            printf("\nObjetivo personal: %s", agenda_personal[i].objetivos_personales);
            printf("\nObjetivo profesional: %s", agenda_personal[i].objetivos_profesionales);
            printf("\nCitas: %s", agenda_personal[i].citas);
            printf("\nFechas importantes: %i/%i/%i", agenda_personal[i].fechas_importantes.dia, agenda_personal[i].fechas_importantes.mes, agenda_personal[i].fechas_importantes.anio);
            printf("\nTarea diaria: %s", agenda_personal[i].tareas_diarias);
            encontrado++;
        }    
    }

    if (encontrado == 0)
    {
        printf("\nLa persona no se encuentra\n");
    }
    
    return 0;    
}