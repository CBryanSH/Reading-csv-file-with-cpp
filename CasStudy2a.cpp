#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Place{
	char loc[18];
	char city[15];
	long long price;
	int room;
	int bath;
	int car;
	char type[15];
	char fur[15];
};

void swap(struct Place *a, struct Place *b){
	struct Place temp = *a;
	*a = *b;
	*b = temp;
}

void copy(struct Place *a, struct Place *b){
	*a = *b;
}

void skip(FILE *data) {
    int c;
    while ((c = fgetc(data)) != EOF && c != '\n');
}

void display(int a){
	FILE *data=fopen("file.csv", "r");
	char loc[18], city[15], type[15], fur[15];
	long price, room, bath, car;
	
	printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
	skip(data);
	
	for (int i=1;i<=a;i++){
		fscanf(data, "%18[^,],%15[^,],%ld,%ld,%ld,%ld,%15[^,],%15[^\n]\n", loc, city, &price, &room, &bath, &car, type, fur);
		printf ("%-18s %-15s %-10ld %-8ld %-8ld %-8ld %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
	}
	printf ("Press Enter to return to Menu\n");
	getchar();
	
	fclose(data);
}

void search(char a[10]){
	FILE *data=fopen("file.csv", "r");	
	int found=0;
	char q[18], loc[18], city[15], price[15], room[3], bath[3], car[3], type[15], fur[15];
	
	skip(data);
	
	while (strcmp(a,"Location")!=0 && strcmp(a,"City")!=0 && strcmp(a,"Price")!=0 && strcmp(a,"Rooms")!=0 && strcmp(a,"Bathroom")!=0 && strcmp(a,"Carpark")!=0 && strcmp(a,"Type")!=0 && strcmp(a,"Furnish")!=0){
		printf ("Choices; Location, City, Price, Rooms, Bathroom, Carpark, Type, Furnish\n");
		printf ("Invalid Input, please input available collumn: ");
		scanf (" %s", a);
	}
	
	printf ("Which data do you want to find? ");
	scanf (" %s", q);getchar();
	
	while (!feof(data)){
		fscanf(data, "%18[^,],%15[^,],%15[^,],%3[^,],%3[^,],%3[^,],%15[^,],%15[^\n]\n", loc, city, price, room, bath, car, type, fur);
		if (strcmp(a,"Location")==0 && strcmp(q,loc)==0){
			if (found==0){
			found=1;
			printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			}
		printf ("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
		} else if (strcmp(a,"City")==0 && strcmp(q,city)==0){
			if (found==0){
			found=1;
			printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			}
		printf ("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
		} else if (strcmp(a,"Price")==0 && strcmp(q,price)==0){
			if (found==0){
			found=1;
			printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			}
		printf ("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
		} else if (strcmp(a,"Rooms")==0 && strcmp(q,room)==0){
			if (found==0){
			found=1;
			printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			}
		printf ("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
		} else if (strcmp(a,"Bathroom")==0 && strcmp(q,bath)==0){
			if (found==0){
			found=1;
			printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			}
		printf ("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
		} else if (strcmp(a,"Carpark")==0 && strcmp(q,car)==0){
			if (found==0){
			found=1;
			printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			}
		printf ("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
		} else if (strcmp(a,"Type")==0 && strcmp(q,type)==0){
			if (found==0){
			found=1;
			printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			}
		printf ("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
		} else if (strcmp(a,"Furnish")==0 && strcmp(q,fur)==0){
			if (found==0){
			found=1;
			printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
			}
		printf ("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", loc, city, price, room, bath, car, type, fur);
		}
	}
	fclose(data);
	
	if (found==0){
		printf ("Data not found!\n");
	}
	printf ("Press Enter to return to Menu\n");
	getchar();
}

void ms(struct Place arr[], int l, int m, int r, int cat, int ord){
	int li=0;
	int ll=m-l+1;
	
	int ri=0;
	int rl=r-m;
	
	struct Place L[ll], R[rl], temp[10];
	
	for (int i=0;i<ll;i++){
		L[i]=arr[l+1];
	}
	for (int i=0;i<rl;i++){
		R[i]=arr[1+m+i];
	}
	
	int ix=l;
		switch (ord){
			case 1: //ascending
				switch (cat){
					case 1://Location
						while (li<ll && ri<rl){
							if (strcmp(L[li].loc,R[ri].loc)<=0){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 2://City
						while (li<ll && ri<rl){
							if (strcmp(L[li].city,R[ri].city)<=0){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 3://Price
						while (li<ll && ri<rl){
							if (L[li].price<=R[ri].price){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 4://Rooms
						while (li<ll && ri<rl){
							if (L[li].room<=R[ri].room){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 5://Bathroom
						while (li<ll && ri<rl){
							if (L[li].bath<=R[ri].bath){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 6://Carpark
						while (li<ll && ri<rl){
							if (L[li].car<=R[ri].car){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 7://Type
						while (li<ll && ri<rl){
							if (strcmp(L[li].type,R[ri].type)<=0){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 8://Furnish
						while (li<ll && ri<rl){
							if (strcmp(L[li].fur,R[ri].fur)<=0){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
				}
				break;
			case 2://descending
				switch (cat){
					case 1://Location
						while (li<ll && ri<rl){
							if (strcmp(L[li].loc,R[ri].loc)>=0){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 2://City
						while (li<ll && ri<rl){
							if (strcmp(L[li].city,R[ri].city)>=0){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 3://Price
						while (li<ll && ri<rl){
							if (L[li].price>=R[ri].price){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 4://Rooms
						while (li<ll && ri<rl){
							if (L[li].room>=R[ri].room){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 5://Bathroom
						while (li<ll && ri<rl){
							if (L[li].bath>=R[ri].bath){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 6://Carpark
						while (li<ll && ri<rl){
							if (L[li].car>=R[ri].car){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 7://Type
						while (li<ll && ri<rl){
							if (strcmp(L[li].type,R[ri].type)>=0){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
					case 8://Furnish
						while (li<ll && ri<rl){
							if (strcmp(L[li].fur,R[ri].fur)>=0){
								arr[ix]=L[li];
								li++;
							} else {
								arr[ix]=R[ri];
								ri++;
							}
							ix++;
						}
						break;
				}
				break;
	}
	
	while (li<ll){
		arr[ix]=L[li];
		ix++;
		li++;
	}
	while (ri<rl){
		arr[ix]=R[ri];
		ix++;
		ri++;
	}
}

void merge(Place arr[], int l, int r, int cat, int ord){
	if (l<r){
		int m=l+(r-l)/2;
		
		merge(arr, l, m, cat, ord);
		merge(arr, m+1, r, cat, ord);
		ms(arr, l, m, r, cat, ord);
	}	
}

void sort(char a[10]){
	FILE *data = fopen ("file.csv", "r");
	if (data == NULL) {
        perror("Error opening file");
        return;
    }
    int cat, ord;
	
	while (strcmp(a,"Location")!=0 && strcmp(a,"City")!=0 && strcmp(a,"Price")!=0 && strcmp(a,"Rooms")!=0 && strcmp(a,"Bathroom")!=0 && strcmp(a,"Carpark")!=0 && strcmp(a,"Type")!=0 && strcmp(a,"Furnish")!=0){
		printf ("(Location, City, Price, Rooms, Bathroom, Carpark, Type, Furnish)\n");
		printf ("Invalid Input, please input available collumn: ");
		scanf (" %s", a);
	}
	printf ("Sort ascending(1) or descending(2)? ");
	scanf (" %d", &ord);
	while (ord!=1 && ord!=2){
		printf ("Invalid Input, please give another input: ");
		scanf (" %d", &ord);
	}
	
	struct Place place[4000];
	skip(data);
	int i=0;
	while (fscanf(data,"%[^,],%[^,],%lld,%d,%d,%d,%[^,],%[^\n]\n", place[i].loc, place[i].city, &place[i].price, &place[i].room, &place[i].bath, &place[i].car, place[i].type, place[i].fur)==8){
		i++;
	}
	
	if (strcmp(a,"Location")==0){
		cat=1;
	} else if (strcmp(a,"City")==0){
		cat=2;
	} else if (strcmp(a,"Price")==0){
		cat=3;
	} else if (strcmp(a,"Rooms")==0){
		cat=4;
	} else if (strcmp(a,"Bathroom")==0){
		cat=5;
	} else if (strcmp(a,"Carpark")==0){
		cat=6;
	} else if (strcmp(a,"Type")==0){
		cat=7;
	} else if (strcmp(a,"Furnish")==0){
		cat=8;
	}
	
	merge(place, 0, i-1, cat, ord);
	
	printf ("Data found. Detail of data: \n");
	printf("%-18s %-15s %-10s %-8s %-8s %-8s %-15s %-15s\n", "Location", "City", "Price", "Rooms", "Bathroom", "Carpark", "Type", "Furnish");
	for (int i=0;i<10;i++){
		printf("%-18s %-15s %-10lld %-8d %-8d %-8d %-15s %-15s\n", place[i].loc, place[i].city, place[i].price, place[i].room, place[i].bath, place[i].car, place[i].type, place[i].fur);
	}
	getchar();
	
	printf ("Press Enter to return to Menu\n");
	getchar();
}

void expdata(char s[31]){
	FILE *data = fopen ("file.csv","r");
	FILE *newdata = fopen (s,"w");
	
	char file[1001];
	
	while (fgets(file, sizeof(file), data) != NULL) {
        fputs(file, newdata);
    }
    
	fclose(data);
	fclose(newdata);
	
	printf ("Data successfully written to %s.csv!\n", s); 
	getchar();
}

int main(){
	int d;
	while (1){
		system ("cls");
		printf(	"What do you want to do?\n"
				"1. Display data\n"
				"2. Search Data\n"
				"3. Sort Data\n"
				"4. Export Data\n"
				"5. Exit\n"
				"Your choice: ");
		scanf (	" %d", &d);getchar();
		
		switch (d){
			case 1:
				int x;
				printf ("Number of rows: ");
				scanf (" %d", &x);getchar();
				display(x);
				break;
			case 2:
				char z[10];
				printf ("Choose Column: ");
				scanf (" %s", z);getchar();
				search(z);
				break;
			case 3:
				char zz[10];
				printf ("Choose Column: ");
				scanf (" %s", zz);getchar();
				sort(zz);
				break;
			case 4:
				char y[31];
				printf ("File name: ");
				scanf (" %s", y);getchar();
				expdata(y);
				break;
			case 5:
				printf ("Exiting Program...");
				return 0;
			default:
				printf ("Invalid Input, Try Again!\n");
				getchar();
				break;
		}
	}
}
