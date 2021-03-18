
void	ft_room(void)
{
	srand(time(NULL));
	int r = rand() % 25;
	char move = '\0';
	int Pos_x = 5;
	int Pos_y = -5;	
	r = r/8*12;
	while (move != 113)
	{	
	scanf("%c", &move);
	if (move==97){
	Pos_x = Pos_x-2;
	}
	if (move==100){
	Pos_x = Pos_x+2;
	}
	if (move==115){
	Pos_y = Pos_y-1;
	}
	if (move==119){
	Pos_y = Pos_y+1;
	}
	if (move!=113){
	move = '\0';
	}
	int R_X;
	int R_Y;
	if (r > 0)	
	for (R_Y=0; R_Y<=r; R_Y++)
	{	
	for (R_X=0; R_X<=r*2; R_X++)
	{	
	if (R_X==0 || R_X==r*2 || R_Y==0 || R_Y==r)
	printf("o");
	else	
	if (R_X==Pos_x && R_Y==Pos_y*-1){
	printf("o");
	}
	else	
	printf(" ");	
	}
	printf("\n");
	}
	}
	printf("%d, %d", Pos_x, Pos_y); 
}

int main()
{
	ft_room();
}
