#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct ContactInfo
{
        char email[50];
        long long int phone;
};
struct YouTubeManagement
{
    char channel_name[50];
    int total_videos;
    long long int subscriber_count;
    double earnings;
    struct ContactInfo contact_info;
};

void readDetails(struct YouTubeManagement *s)
{
    scanf("%[^\n]s",(s->channel_name)); 
    fflush(stdin);
    scanf("%d",&(s->total_videos));
    scanf("%lld",&(s->subscriber_count));
    scanf("%s",(s->contact_info.email)); 
    scanf("%lld",&(s->contact_info.phone));
}
void calculateEarnings(struct YouTubeManagement *s)
{
    s->earnings=(s->total_videos)*(s->subscriber_count)*0.45;
}
void displayDetails(struct YouTubeManagement s)
{

    printf("Channel Name: %s\n",(s.channel_name));
    printf("Total Videos: %d\n",(s.total_videos));
    printf("Subscriber Count: %lld\n",(s.subscriber_count));
    printf("Contact Email: %s\n",(s.contact_info.email));
    printf("Contact Phone: %lld\n",(s.contact_info.phone));
    printf("Total Earnings of the Channel: Rs. %.2lf",(s.earnings));
}

int main()
{
    struct YouTubeManagement s1;
    readDetails(&s1);
    calculateEarnings(&s1);
    displayDetails(s1);
    return 0;
}