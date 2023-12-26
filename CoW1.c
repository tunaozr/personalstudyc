#include"stdio.h"
#include"stdlib.h"
#include"math.h"

//include neccessary libraries

int main()
{
//declare following variables
    float a,r,l,h,area,volume,pi=(22/7.0),x,y,z;
    int choice,calc;

    printf("which shape's area or volume do you want to calculate ? \n\n");

//asking user what geometrical shape to work with
    printf("1 for Right Circular Cone\n2 for Sphere\n3 for Cuboid\n4 for Tetrahedron\n");
    printf("5 for Square Prism\n6 for Rectangular Prism\n7 for Triangle Prism\n8 for Ellipsoid\n");
    scanf("%d",&choice);

    if(choice>8 || choice<1){
        printf("invalid pick\n\n");
        return 0;
    }
//asking user if they want to calculate area or volume
    printf("1 for calculate area, 2 for calculate volume");
    scanf("%d",&calc);

//using a switch case statement for each shape then using an "if elif else" statement to whether 
//then using an "if elif else" statement to whether they want to calculate surface area or volume
//lastly printing out the prefered calculation results

    switch (choice)
    {
        case 1:
            
            if (calc==1)
            {
                printf("type in the radius of the cone :");
                scanf("%f",&r);
                printf("type in the height of the cone :");
                scanf("%f",&h);

                float slang_height = sqrt(r*r+h*h);
                area = pi*r*slang_height;

                printf("area of the right circular cone is = %.2f\n",area);
            }
            else if (calc==2)
            {
                printf("type in the radius of the cone :");
                scanf("%f",&r);
                printf("type in the height of the cone :");
                scanf("%f",&h);

                volume = 1.0/3*(pi*r*r*h);

                printf("volume of the right circular cone is = %.2f\n",volume);
            }
            else1
                printf("invalid choice!");
            
            break;

        case 2:

            if(calc==1)
            {
                printf("type in the radius of the sphere : ");
                scanf("%f",&r);

                area = 4*(pi*r*r);

                printf("area of the sphere is = %.2f\n",area);
            }

            else if(calc==2)
            {
                printf("type in the radius of the sphere : ");
                scanf("%f",&r);

                volume = 4/3.0*(pi*r*r*r);

                printf("volume of the sphere is = %.2f\n",volume);
            }
            else
                printf("invalid choice!");

            break;

        case 3:

            if(calc == 1)
            {
                printf("type in the lenght of the cuboid :");
                scanf("%f",&l);
                printf("type in the breadth of the cuboid :");
                scanf("%f",&a);
                printf("type in the height of the cuboid :");
                scanf("%f",&h);

                area = 2*(l+a+h);

                printf("area of the cuboid is = %.2f\n",area);
            }
            else if(calc == 2)
            {
                printf("type in the lenght of the cuboid :");
                scanf("%f",&l);
                printf("type in the breadth of the cuboid :");
                scanf("%f",&a);
                printf("type in the height of the cuboid :");
                scanf("%f",&h);

                volume = l*a*h;

                printf("volume of the cuboid is = %.2f\n",volume);
            }
            else
                printf("invalid choice!");

            break;
        
        case 4:

            if(calc==1)
            {
                printf("type in one edge of the tetrahedron : ");
                scanf("%f",&a);

                area = sqrt(3)*a*a;

                printf("area of the tetrahedron is = %.2f\n",area);
            }

            else if(calc==2)
            {
                printf("type in one edge of the tetrahedron : ");
                scanf("%f",&a);

                volume = (sqrt(2)/12)*a*a*a;

                printf("volume of the sphere is = %.2f\n",volume);
            }
            else
                printf("invalid choice!");

            break;

        case 5:

             if (calc==1)
            {
                printf("type in one edge of the square prism :");
                scanf("%f",&a);
                printf("type in the height of the square prism :");
                scanf("%f",&h);

                area = (4*a*h)+(2*a*a);

                printf("surface area of the square prism is = %.2f\n",area);
            }
            else if (calc==2)
            {
                printf("type in one edge of the square prism :");
                scanf("%f",&a);
                printf("type in the height of the square prism :");
                scanf("%f",&h);

                volume = a*a*h;

                printf("volume of the square prism is = %.2f\n",volume);
            }
            else 
                printf("invalid choice!");
            
            break;
        
        case 6:

            if (calc==1)
            {
                printf("type in the breadth of the rectangular prism :");
                scanf("%f",&a);
                printf("type in the height of the rectangular prism :");
                scanf("%f",&h);
                printf("type in the lenght of the rectangular prism :");
                scanf("%f",&l);

                area = 2*(l*a+a*h+l*h);

                printf("surface area of the rectangular prism is = %.2f\n",area);
            }
            else if (calc==2)
            {
                printf("type in one edge of the rectangular prism :");
                scanf("%f",&a);
                printf("type in the height of the rectangular prism :");
                scanf("%f",&h);
                printf("type in the lenght of the rectangular prism :");
                scanf("%f",&l);

                volume = l*a*h;

                printf("volume of the rectangular prism is = %.2f\n",volume);
            }
            else 
                printf("invalid choice!");
            
            break;
        
        case 7:


            if (calc==1)
            {
                printf("type in the base edges of the triangular prism (x, y, z) : ");
                scanf("%f,%f,%f",&x,&y,&z);
                printf("type in the height of the triangular prism :");
                scanf("%f",&h);
                printf("type in the lenght of the triangular prism :");
                scanf("%f",&l);

                area = y*h*(x+y+z)*l;

                printf("surface area of the triangular prism is = %.2f\n",area);
            }
            else if (calc==2)
            {
                printf("type in one edge of the triangular prism :");
                scanf("%f",&a);
                printf("type in the height of the triangular prism :");
                scanf("%f",&h);
                printf("type in the lenght of the triangular prism :");
                scanf("%f",&l);

                volume = l*a*h;

                printf("volume of the triangular prism is = %.2f\n",volume);
            }
            else 
                printf("invalid choice!");
            
            break;

        case 8:if (calc==1)
            {
                printf("type in the x,y,z values for ellipsoid (x y z) : ");
                scanf("%f %f %f",&x,&y,&z);

                area = 4 * pi
                  * pow((pow(x * y, 1.6) + pow(x * z, 1.6)
                         + pow(y * z, 1.6))
                            / 3,
                        1 / 1.6);

                printf("surface area of the ellipsoid is = %.2f\n",area);
            }
            else if (calc==2)
            {
                printf("type in the x,y,z values for ellipsoid (x y z) :");
                scanf("%f %f %f",&x,&y,&z);
                
                volume = pi*4/3*x*y*z;

                printf("volume of the ellipsoid is = %.2f\n",volume);
            }
            else 
                printf("invalid choice!");
            
            break;
                
    }

    return 0;
}