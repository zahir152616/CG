#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>


/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    float x,y,i;
    float PI=3.1416;

    void circle(void)
    {
        float x, y;
        int i;
        GLfloat radius;
        int triangleAmount =40;
        GLfloat twicePi = 2.0 * PI;

        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(137, 123, 100);
        x=-50; y=50; radius =20;
        twicePi = 2.0 * PI;

        glVertex2f(x, y); // center of circle
        for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                  );
        }

    glEnd();

 glutSwapBuffers();
}



/// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
///glColor3f (1.0, 1.0, 1.0);


	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	///Trapezoid
	/// road
	glColor3ub(63,64,45);
	glVertex3f(0.48f, 0.83f, 0.0f);
	glVertex3f(0.52f, 0.83f, 0.0f);
	glVertex3f(0.90f, 0.00f, 0.0f);
	glVertex3f(0.10f, 0.00f, 0.0f);

	///road mid point

	glColor3f (1.0, 1.0, 1.0);
	glVertex3f(0.50f, 0.83f, 0.0f);
	glVertex3f(0.502f, 0.83f, 0.0f);
	glVertex3f(0.53f, 0.00f, 0.0f);
	glVertex3f(0.47f, 0.00f, 0.0f);

	///river border
	glColor3ub(249, 245, 31);
	glVertex3f(0.475f, 0.83f, 0.0f);
	glVertex3f(0.48f, 0.83f, 0.0f);
	glVertex3f(0.12f, 0.00f, 0.0f);
	glVertex3f(0.09f, 0.00f, 0.0f);

	///river
	glColor3ub(172, 236, 241);
	glVertex3f(0.0f, 0.83f, 0.0f);
	glVertex3f(0.475f, 0.83f, 0.0f);
	glVertex3f(0.09f, 0.00f, 0.0f);
	glVertex3f(0.0f, 0.00f, 0.0f);

	///boad right side border
	glColor3ub(249, 245, 31);
	glVertex3f(0.52f, 0.83f, 0.0f);
	glVertex3f(0.525f, 0.83f, 0.0f);
	glVertex3f(0.93f, 0.00f, 0.0f);
	glVertex3f(0.90f, 0.00f, 0.0f);

	///soil side
	glColor3ub(155, 118, 83);
	glVertex3f(0.525f, 0.83f, 0.0f);
	glVertex3f(1.0f, 0.83f, 0.0f);
	glVertex3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.93f, 0.00f, 0.0f);

    ///sky
	glColor3ub(218, 227, 252);
	glVertex3f(0.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 0.83f, 0.0f);
	glVertex3f(0.0f, 0.83f, 0.0f);

	glEnd();

	///.//////////////////////////////////////////

	///house part///

	///.//////////////////////////////////////////

	glBegin(GL_QUADS);

	///bulding 1
	glColor3ub(92,77,69);
	glVertex3f(0.545f, 0.845f, 0.0f);
	glVertex3f(0.59f, 0.89f, 0.0f);
	glVertex3f(0.59f, 0.79f, 0.0f);
	glVertex3f(0.545f, 0.83f, 0.0f);

    ///mood 1
	glColor3ub(176, 143, 112);
	glVertex3f(0.545f, 0.843f, 0.0f);
	glVertex3f(0.59f, 0.886f, 0.0f);
	glVertex3f(0.59f, 0.86f, 0.0f);
	glVertex3f(0.545f, 0.837f, 0.0f);
    ///mood 2
	glColor3ub(234, 25, 19);
	glVertex3f(0.545f, 0.835f, 0.0f);
	glVertex3f(0.59f, 0.82f, 0.0f);
	glVertex3f(0.59f, 0.794f, 0.0f);
	glVertex3f(0.545f, 0.832f, 0.0f);

    ///b1 side
	glColor3ub(189,206,169);
	glVertex3f(0.59f, 0.89f, 0.0f);
	glVertex3f(1.0f, 0.89f, 0.0f);
	glVertex3f(1.0f, 0.79f, 0.0f);
	glVertex3f(0.59f, 0.79f, 0.0f);

	///road
	glColor3ub(63,64,45);
	glVertex3f(0.539f, 0.79f, 0.0f);
	glVertex3f(1.0f, 0.79f, 0.0f);
	glVertex3f(1.0f, 0.78f, 0.0f);
	glVertex3f(0.54f, 0.78f, 0.0f);

	/// /// ///

	/// bulding 2 ///mood 1
    glColor3ub(53, 91, 75);
	glVertex3f(0.60f, 0.90f, 0.0f);
	glVertex3f(0.75f, 1.0f, 0.0f);
	glVertex3f(0.75f, 0.60f, 0.0f);
	glVertex3f(0.60f, 0.78f, 0.0f);

	///mood 2 ///mood 6
    glColor3ub(76, 129, 107);
	glVertex3f(0.60f, 0.90f, 0.0f);
	glVertex3f(0.75f, 1.0f, 0.0f);
	glVertex3f(0.75f, 0.665f, 0.0f);
	glVertex3f(0.60f, 0.80f, 0.0f);

	///mood 3
	glColor3ub(92, 158, 130);
	glVertex3f(0.60f, 0.84f, 0.0f);
	glVertex3f(0.75f, 0.795f, 0.0f);
	glVertex3f(0.75f, 0.73f, 0.0f);
	glVertex3f(0.60f, 0.82f, 0.0f);

	///mood 4
	glColor3ub(110, 188, 155);
	glVertex3f(0.60f, 0.86f, 0.0f);
	glVertex3f(0.75f, 0.86f, 0.0f);
	glVertex3f(0.75f, 0.795f, 0.0f);
	glVertex3f(0.60f, 0.84f, 0.0f);

	///mood 5
	glColor3ub(131, 221, 184);
	glVertex3f(0.60f, 0.88f, 0.0f);
	glVertex3f(0.75f, 0.93f, 0.0f);
	glVertex3f(0.75f, 0.86f, 0.0f);
	glVertex3f(0.60f, 0.86f, 0.0f);
///
    ///b2 side
	glColor3ub(189,206,169);
	glVertex3f(0.75f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 0.60f, 0.0f);
	glVertex3f(0.75f, 0.60f, 0.0f);

	///mood 1
    glColor3ub(53, 91, 75);
	glVertex3f(0.752f, 0.665f, 0.0f);
	glVertex3f(0.81f, 0.665f, 0.0f);
	glVertex3f(0.81f, 0.60f, 0.0f);
	glVertex3f(0.752f, 0.60f, 0.0f);

	///mood 2
    glColor3ub(76, 129, 107);
	glVertex3f(0.752f, 0.73f, 0.0f);
	glVertex3f(0.81f, 0.73f, 0.0f);
	glVertex3f(0.81f, 0.665f, 0.0f);
	glVertex3f(0.752f, 0.665f, 0.0f);

	///mood 3
	glColor3ub(92, 158, 130);
	glVertex3f(0.752f, 0.795f, 0.0f);
	glVertex3f(0.81f, 0.795f, 0.0f);
	glVertex3f(0.81f, 0.73f, 0.0f);
	glVertex3f(0.752f, 0.73f, 0.0f);

	///mood 4
	glColor3ub(110, 188, 155);
	glVertex3f(0.752f, 0.86f, 0.0f);
	glVertex3f(0.81f, 0.86f, 0.0f);
	glVertex3f(0.81f, 0.795f, 0.0f);
	glVertex3f(0.752f, 0.795f, 0.0f);

	///mood 5
	glColor3ub(131, 221, 184);
	glVertex3f(0.752f, 0.93f, 0.0f);
	glVertex3f(0.81f, 0.93f, 0.0f);
	glVertex3f(0.81f, 0.86f, 0.0f);
	glVertex3f(0.752f, 0.86f, 0.0f);

	///mood 6
    glColor3ub(53, 91, 75);
	glVertex3f(0.752f, 1.0f, 0.0f);///
	glVertex3f(0.81f, 1.0f, 0.0f);
	glVertex3f(0.81f, 0.93f, 0.0f);
	glVertex3f(0.752f, 0.93f, 0.0f);

	///road
	glColor3ub(63,64,45);
	glVertex3f(0.62f, 0.60f, 0.0f);
	glVertex3f(1.0f, 0.60f, 0.0f);
	glVertex3f(1.0f, 0.50f, 0.0f);
	glVertex3f(0.67f, 0.50f, 0.0f);

/// /// ///

	///bulding 3
	glColor3ub(141, 143, 120);
	glVertex3f(0.81f, 1.0f, 0.0f);
	glVertex3f(0.95f, 1.0f, 0.0f);
	glVertex3f(0.95f, 0.25f, 0.0f);
	glVertex3f(0.81f, 0.50f, 0.0f);

	///mood 1
	glColor3ub(152, 154, 130);
	glVertex3f(0.81f, 1.0f, 0.0f);
	glVertex3f(0.95f, 1.0f, 0.0f);
	glVertex3f(0.95f, 0.375f, 0.0f);
	glVertex3f(0.81f, 0.59f, 0.0f);

    ///mood 2
	glColor3ub(178, 180, 153);
	glVertex3f(0.81f, 1.0f, 0.0f);
	glVertex3f(0.95f, 1.0f, 0.0f);
	glVertex3f(0.95f, 0.50f, 0.0f);
	glVertex3f(0.81f, 0.68f, 0.0f);

	///mood 3
	glColor3ub(197, 199, 170);
	glVertex3f(0.81f, 1.0f, 0.0f);
	glVertex3f(0.95f, 1.0f, 0.0f);
	glVertex3f(0.95f, 0.625f, 0.0f);
	glVertex3f(0.81f, 0.76f, 0.0f);

	///mood 4
	glColor3ub(216, 218, 189);
	glVertex3f(0.81f, 1.0f, 0.0f);
	glVertex3f(0.95f, 1.0f, 0.0f);
	glVertex3f(0.95f, 0.75f, 0.0f);
	glVertex3f(0.81f, 0.84f, 0.0f);

	///mood 5
	glColor3ub(226, 229, 198);
	glVertex3f(0.81f, 1.0f, 0.0f);
	glVertex3f(0.95f, 1.0f, 0.0f);
	glVertex3f(0.95f, 0.875f, 0.0f);
	glVertex3f(0.81f, 0.92f, 0.0f);

/// ////////////////////////

    ///b3 side
	glColor3ub(139, 70, 5);
	glVertex3f(0.95f, 1.0f, 0.0f);
	glVertex3f(0.952f, 1.0f, 0.0f);
	glVertex3f(0.952f, 0.25f, 0.0f);
	glVertex3f(0.95f, 0.25f, 0.0f);

	///mood 1
	glColor3ub(141, 143, 120);
	glVertex3f(0.952f, 0.375f, 0.0f);
	glVertex3f(1.0f, 0.375f, 0.0f);
	glVertex3f(1.0f, 0.25f, 0.0f);
	glVertex3f(0.952f, 0.25f, 0.0f);

	///mood 2
	glColor3ub(152, 154, 130);
	glVertex3f(0.952f, 0.50f, 0.0f);
	glVertex3f(1.0f, 0.50f, 0.0f);
	glVertex3f(1.0f, 0.375f, 0.0f);
	glVertex3f(0.952f, 0.375f, 0.0f);

	///mood 3
	glColor3ub(178, 180, 153);
	glVertex3f(0.952f, 0.625f, 0.0f);
	glVertex3f(1.0f, 0.625f, 0.0f);
	glVertex3f(1.0f, 0.50f, 0.0f);
	glVertex3f(0.952f, 0.50f, 0.0f);

	///mood 4
	glColor3ub(197, 199, 170);
	glVertex3f(0.952f, 0.75f, 0.0f);
	glVertex3f(1.0f, 0.75f, 0.0f);
	glVertex3f(1.0f, 0.625f, 0.0f);
	glVertex3f(0.952f, 0.625f, 0.0f);

	///mood 5
	glColor3ub(216, 218, 189);
	glVertex3f(0.952f, 0.875f, 0.0f);
	glVertex3f(1.0f, 0.875f, 0.0f);
	glVertex3f(1.0f, 0.75f, 0.0f);
	glVertex3f(0.952f, 0.75f, 0.0f);

	///mood 6
	glColor3ub(226, 229, 198);
	glVertex3f(0.952f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 0.875f, 0.0f);
	glVertex3f(0.952f, 0.875f, 0.0f);

	glEnd();


///.//////////////////////////////////////////

///house part end///

///.//////////////////////////////////////////



/// //////////////////////////////////////////////////////////////////////////////////// code for tree \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
/// /////////////// left side tree \\\\\\\\\\\\\\\\\\\\\\\\\

    /// 1st tree

    glBegin(GL_TRIANGLES);

    glColor3ub(75, 171, 24);
    glVertex3f(0.18f, 0.25f, 0.0f);
    glVertex3f(0.20f, 0.20f, 0.0f);
	glVertex3f(0.16f, 0.20f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.18f, 0.265f, 0.0f);
    glVertex3f(0.20f, 0.215f, 0.0f);
	glVertex3f(0.16f, 0.215f, 0.0f);

	 glColor3ub(75, 171, 24);
    glVertex3f(0.18f, 0.28f, 0.0f);
    glVertex3f(0.20f, 0.23f, 0.0f);
	glVertex3f(0.16f, 0.23f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(180, 80, 51);
	glVertex3f(0.178f, 0.20f, 0.0f);
	glVertex3f(0.182f, 0.20f, 0.0f);
	glVertex3f(0.182f, 0.16f, 0.0f);
	glVertex3f(0.178f, 0.16f, 0.0f);

	glEnd();

	/// 2nd tree

	glBegin(GL_TRIANGLES);

    glColor3ub(75, 171, 24);
    glVertex3f(0.31f, 0.53f, 0.0f);
    glVertex3f(0.325f, 0.49f, 0.0f);
	glVertex3f(0.295f, 0.49f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.31f, 0.54f, 0.0f);
    glVertex3f(0.325f, 0.50f, 0.0f);
	glVertex3f(0.295f, 0.50f, 0.0f);

	 glColor3ub(75, 171, 24);
    glVertex3f(0.31f, 0.55f, 0.0f);
    glVertex3f(0.325f, 0.51f, 0.0f);
	glVertex3f(0.295f, 0.51f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(180, 80, 51);
	glVertex3f(0.3085f, 0.49f, 0.0f);
	glVertex3f(0.3115f, 0.49f, 0.0f);
	glVertex3f(0.3115f, 0.455f, 0.0f);
	glVertex3f(0.3085f, 0.455f, 0.0f);

	glEnd();

	/// 3rd tree

	glBegin(GL_TRIANGLES);

    glColor3ub(75, 171, 24);
    glVertex3f(0.395f, 0.70f, 0.0f);
    glVertex3f(0.405f, 0.67f, 0.0f);
	glVertex3f(0.385f, 0.67f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.395f, 0.705f, 0.0f);
    glVertex3f(0.405f, 0.675f, 0.0f);
	glVertex3f(0.385f, 0.675f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.395f, 0.71f, 0.0f);
    glVertex3f(0.405f, 0.68f, 0.0f);
	glVertex3f(0.385f, 0.68f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(180, 80, 51);
	glVertex3f(0.3930f, 0.67f, 0.0f);
	glVertex3f(0.396f, 0.67f, 0.0f);
	glVertex3f(0.396f, 0.645f, 0.0f);
	glVertex3f(0.3930f, 0.645f, 0.0f);

	glEnd();

	/// 4th tree

	glBegin(GL_TRIANGLES);

    glColor3ub(75, 171, 24);
    glVertex3f(0.44f, 0.77f, 0.0f);
    glVertex3f(0.447f, 0.756f, 0.0f);
	glVertex3f(0.433f, 0.756f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.44f, 0.774f, 0.0f);
    glVertex3f(0.447f, 0.76f, 0.0f);
	glVertex3f(0.433f, 0.76f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.44f, 0.778f, 0.0f);
    glVertex3f(0.447f, 0.764f, 0.0f);
	glVertex3f(0.433f, 0.764f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(180, 80, 51);
	glVertex3f(0.439f, 0.756f, 0.0f);
	glVertex3f(0.441f, 0.756f, 0.0f);
	glVertex3f(0.441f, 0.745f, 0.0f);
	glVertex3f(0.439f, 0.745f, 0.0f);

	glEnd();





/// //////////////////////////////////////////

/// ///////////////////right side tree \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


/// 1st tree

    glBegin(GL_TRIANGLES);

    glColor3ub(75, 171, 24);
    glVertex3f(0.838f, 0.25f, 0.0f);
    glVertex3f(0.858f, 0.20f, 0.0f);
	glVertex3f(0.818f, 0.20f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.838f, 0.265f, 0.0f);
    glVertex3f(0.858f, 0.215f, 0.0f);
	glVertex3f(0.818f, 0.215f, 0.0f);

	 glColor3ub(75, 171, 24);
    glVertex3f(0.838f, 0.28f, 0.0f);
    glVertex3f(0.858f, 0.23f, 0.0f);
	glVertex3f(0.818f, 0.23f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(180, 80, 51);
	glVertex3f(0.836f, 0.20f, 0.0f);
	glVertex3f(0.84f, 0.20f, 0.0f);
	glVertex3f(0.84f, 0.16f, 0.0f);
	glVertex3f(0.836f, 0.16f, 0.0f);

	glEnd();

	/// 2nd tree

	glBegin(GL_TRIANGLES);

    glColor3ub(75, 171, 24);
    glVertex3f(0.70f, 0.53f, 0.0f);
    glVertex3f(0.715f, 0.49f, 0.0f);
	glVertex3f(0.685f, 0.49f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.70f, 0.54f, 0.0f);
    glVertex3f(0.7155f, 0.50f, 0.0f);
	glVertex3f(0.685f, 0.50f, 0.0f);

	 glColor3ub(75, 171, 24);
    glVertex3f(0.70f, 0.55f, 0.0f);
    glVertex3f(0.715f, 0.51f, 0.0f);
	glVertex3f(0.685f, 0.51f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(180, 80, 51);
	glVertex3f(0.6985f, 0.49f, 0.0f);
	glVertex3f(0.7015f, 0.49f, 0.0f);
	glVertex3f(0.7015f, 0.455f, 0.0f);
	glVertex3f(0.6985f, 0.455f, 0.0f);

	glEnd();

	/// 3rd tree

	glBegin(GL_TRIANGLES);

    glColor3ub(75, 171, 24);
    glVertex3f(0.609f, 0.70f, 0.0f);
    glVertex3f(0.619f, 0.67f, 0.0f);
	glVertex3f(0.599f, 0.67f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.609f, 0.705f, 0.0f);
    glVertex3f(0.619f, 0.675f, 0.0f);
	glVertex3f(0.599f, 0.675f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.609f, 0.71f, 0.0f);
    glVertex3f(0.619f, 0.68f, 0.0f);
	glVertex3f(0.599f, 0.68f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(180, 80, 51);
	glVertex3f(0.607f, 0.67f, 0.0f);
	glVertex3f(0.61f, 0.67f, 0.0f);
	glVertex3f(0.61f, 0.645f, 0.0f);
	glVertex3f(0.607f, 0.645f, 0.0f);

	glEnd();

	/// 4th tree

	glBegin(GL_TRIANGLES);

    glColor3ub(75, 171, 24);
    glVertex3f(0.563f, 0.77f, 0.0f);
    glVertex3f(0.57f, 0.756f, 0.0f);
	glVertex3f(0.556f, 0.756f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.563f, 0.774f, 0.0f);
    glVertex3f(0.57f, 0.76f, 0.0f);
	glVertex3f(0.556f, 0.76f, 0.0f);

    glColor3ub(75, 171, 24);
    glVertex3f(0.563f, 0.778f, 0.0f);
    glVertex3f(0.57f, 0.764f, 0.0f);
	glVertex3f(0.556f, 0.764f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(180, 80, 51);
	glVertex3f(0.562f, 0.756f, 0.0f);
	glVertex3f(0.564f, 0.756f, 0.0f);
	glVertex3f(0.564f, 0.745f, 0.0f);
	glVertex3f(0.562f, 0.745f, 0.0f);

	glEnd();




/// /////////////////////////////////////////




glFlush ();
}






void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("View of a Natural City");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
