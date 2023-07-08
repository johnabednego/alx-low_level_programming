unsigned int minimum_coins(int cents)
{
if (cents < 0)
return (0);

unsigned int num_coins = 0;

while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;

num_coins++;
}

return (num_coins);
}
