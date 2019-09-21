case cooke__speed_panchro__1920__18mm:
{
double pred_x;
double pred_y;
double pred_dx;
double pred_dy;
double sqr_err = FLT_MAX;
for(int k=0;k<5&&sqr_err > 1e-4f;k++)
{
  const double begin_x = x + dist * dx;
  const double begin_y = y + dist * dy;
  const double begin_dx = dx;
  const double begin_dy = dy;
  const double begin_lambda = lambda;
  pred_x =  + 12.9766 *begin_dx + 0.662733 *begin_x + 0.0176878 *begin_x*begin_lambda + 0.322163 *begin_dx*begin_lambda + -0.362789 *begin_y*begin_dx*begin_dy + -0.00364467 *lens_ipow(begin_x, 2)*begin_dx + -10.1041 *lens_ipow(begin_dx, 3) + -9.68762 *begin_dx*lens_ipow(begin_dy, 2) + 0.00031596 *begin_x*lens_ipow(begin_y, 2) + -0.278293 *begin_x*lens_ipow(begin_dy, 2) + -0.74213 *begin_x*lens_ipow(begin_dx, 2) + 0.00448878 *lens_ipow(begin_y, 2)*begin_dx + 7.1231e-05 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + 0.000407038 *lens_ipow(begin_x, 3)*begin_lambda + -1.07264 *begin_y*lens_ipow(begin_dx, 3)*begin_dy + 2.02572 *lens_ipow(begin_dx, 5) + -1.61206e-06 *begin_x*lens_ipow(begin_y, 4) + 8.1859e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx + 0.15825 *begin_x*lens_ipow(begin_dy, 4) + -0.0300557 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -0.700961 *begin_y*begin_dx*lens_ipow(begin_dy, 3) + -0.0496253 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + 0.00695169 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_lambda, 2) + -0.0210117 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 2) + 8.16694e-08 *lens_ipow(begin_x, 6)*begin_dx + -0.000101435 *lens_ipow(begin_x, 4)*begin_dx*lens_ipow(begin_lambda, 2) + -4.56498e-06 *lens_ipow(begin_x, 5)*lens_ipow(begin_lambda, 2) + 3.87568e-11 *lens_ipow(begin_x, 7)*lens_ipow(begin_y, 3)*begin_dy;
  pred_y =  + 0.662987 *begin_y + 12.965 *begin_dy + 0.377198 *begin_dy*begin_lambda + 0.0197292 *begin_y*begin_lambda + -0.307721 *begin_y*lens_ipow(begin_dx, 2) + -0.00450013 *lens_ipow(begin_y, 2)*begin_dy + -0.790181 *begin_y*lens_ipow(begin_dy, 2) + -0.481316 *begin_x*begin_dx*begin_dy + -0.00588822 *begin_x*begin_y*begin_dx + -10.2053 *lens_ipow(begin_dx, 2)*begin_dy + -10.4048 *lens_ipow(begin_dy, 3) + 0.000419695 *lens_ipow(begin_y, 3)*begin_lambda + 0.000297637 *lens_ipow(begin_x, 2)*begin_y*begin_lambda + -0.000202156 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_lambda, 2) + 0.00147169 *begin_x*lens_ipow(begin_y, 2)*begin_dx*begin_dy + 1.99843 *lens_ipow(begin_dy, 5) + 0.0844115 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2) + -0.0213895 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy + -0.000313062 *lens_ipow(begin_y, 3)*lens_ipow(begin_lambda, 2) + 0.000148138 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dy + 0.0039002 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 2) + 0.000204911 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2) + 0.00011744 *lens_ipow(begin_x, 3)*begin_y*lens_ipow(begin_dx, 3) + -5.74732e-09 *lens_ipow(begin_y, 7) + 13.8205 *lens_ipow(begin_dx, 6)*begin_dy + 0.682883 *begin_y*lens_ipow(begin_dx, 6) + 0.00350062 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 5)*begin_dy + -1.98836e-12 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 7);
  pred_dx =  + 0.460346 *begin_dx + -0.0556374 *begin_x + 0.00618736 *begin_x*begin_lambda + 0.00200762 *lens_ipow(begin_x, 2)*begin_dx + 0.366622 *begin_dx*lens_ipow(begin_dy, 2) + -0.000103571 *begin_x*lens_ipow(begin_y, 2) + -0.17781 *begin_x*lens_ipow(begin_dx, 2)*begin_lambda + 0.0572014 *begin_dx*lens_ipow(begin_lambda, 3) + -0.568399 *lens_ipow(begin_dx, 3)*begin_lambda + -0.000292941 *lens_ipow(begin_x, 3)*begin_lambda + -0.0125474 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + -0.000622601 *lens_ipow(begin_y, 2)*begin_dx*begin_lambda + -0.0285809 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + -0.413861 *begin_y*lens_ipow(begin_dx, 3)*begin_dy + 2.00987 *lens_ipow(begin_dx, 5) + -0.000457602 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 2) + -9.07107e-07 *lens_ipow(begin_x, 5) + -0.00103224 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + 0.00337997 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_dy, 2) + -0.0122658 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3) + 0.223233 *begin_x*lens_ipow(begin_dx, 4)*begin_lambda + -1.0978e-05 *lens_ipow(begin_x, 3)*begin_y*begin_dy*begin_lambda + 1.22782e-06 *lens_ipow(begin_x, 5)*begin_lambda + 1.92935e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 4)*begin_dx + -0.000719199 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -2.5261e-08 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + 3.32113e-10 *begin_x*lens_ipow(begin_y, 7)*begin_dy + 4.8979e-10 *lens_ipow(begin_x, 8)*lens_ipow(begin_dx, 3);
  pred_dy =  + -0.0569232 *begin_y + 0.481605 *begin_dy + 0.0178552 *begin_y*begin_lambda + -0.0412433 *begin_y*lens_ipow(begin_dx, 2) + -0.00620323 *lens_ipow(begin_y, 2)*begin_dy + -0.115443 *begin_y*lens_ipow(begin_dy, 2) + -0.0717224 *begin_x*begin_dx*begin_dy + -0.00406938 *begin_x*begin_y*begin_dx + -0.268667 *lens_ipow(begin_dx, 2)*begin_dy + -0.0135893 *begin_y*lens_ipow(begin_lambda, 2) + -0.000221725 *lens_ipow(begin_x, 2)*begin_y + -0.000205809 *lens_ipow(begin_y, 3) + -0.00249321 *lens_ipow(begin_x, 2)*begin_dy + -0.352336 *lens_ipow(begin_dy, 3) + 0.00389176 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*begin_dy + 0.501466 *lens_ipow(begin_dy, 5) + -4.44478e-07 *lens_ipow(begin_y, 5) + 0.00496494 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3) + 3.21534e-07 *lens_ipow(begin_y, 5)*begin_lambda + -1.56297e-06 *lens_ipow(begin_y, 5)*lens_ipow(begin_dx, 2) + 0.000155582 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -9.83775e-09 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 3) + 11.4635 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 5)*begin_lambda + -0.0585576 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 4)*begin_lambda + -1.61978e-11 *lens_ipow(begin_x, 8)*begin_y + -1.35043e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 4) + 0.000127143 *lens_ipow(begin_y, 4)*lens_ipow(begin_dx, 4)*begin_dy + 1.14294e-07 *lens_ipow(begin_y, 6)*lens_ipow(begin_dy, 3);
  Eigen::Matrix2d dx1_domega0;
  dx1_domega0(0, 0) =  + 12.9766  + 0.322163 *begin_lambda + -0.362789 *begin_y*begin_dy + -0.00364467 *lens_ipow(begin_x, 2) + -30.3122 *lens_ipow(begin_dx, 2) + -9.68762 *lens_ipow(begin_dy, 2) + -1.48426 *begin_x*begin_dx + 0.00448878 *lens_ipow(begin_y, 2) + -3.21791 *begin_y*lens_ipow(begin_dx, 2)*begin_dy + 10.1286 *lens_ipow(begin_dx, 4) + 8.1859e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + -0.0300557 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 2) + -0.700961 *begin_y*lens_ipow(begin_dy, 3) + -0.148876 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + 0.00695169 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 2) + -0.0210117 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + 8.16694e-08 *lens_ipow(begin_x, 6) + -0.000101435 *lens_ipow(begin_x, 4)*lens_ipow(begin_lambda, 2)+0.0f;
  dx1_domega0(0, 1) =  + -0.362789 *begin_y*begin_dx + -19.3752 *begin_dx*begin_dy + -0.556585 *begin_x*begin_dy + -1.07264 *begin_y*lens_ipow(begin_dx, 3) + 0.632998 *begin_x*lens_ipow(begin_dy, 3) + -0.0601114 *lens_ipow(begin_y, 2)*begin_dx*begin_dy + -2.10288 *begin_y*begin_dx*lens_ipow(begin_dy, 2) + -0.0420234 *lens_ipow(begin_x, 2)*begin_dx*begin_dy + 3.87568e-11 *lens_ipow(begin_x, 7)*lens_ipow(begin_y, 3)+0.0f;
  dx1_domega0(1, 0) =  + -0.615442 *begin_y*begin_dx + -0.481316 *begin_x*begin_dy + -0.00588822 *begin_x*begin_y + -20.4107 *begin_dx*begin_dy + 0.00147169 *begin_x*lens_ipow(begin_y, 2)*begin_dy + 0.0844115 *begin_x*begin_y*lens_ipow(begin_dy, 2) + -0.0427791 *lens_ipow(begin_y, 2)*begin_dx*begin_dy + 0.000352319 *lens_ipow(begin_x, 3)*begin_y*lens_ipow(begin_dx, 2) + 82.9232 *lens_ipow(begin_dx, 5)*begin_dy + 4.0973 *begin_y*lens_ipow(begin_dx, 5) + 0.0175031 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 4)*begin_dy+0.0f;
  dx1_domega0(1, 1) =  + 12.965  + 0.377198 *begin_lambda + -0.00450013 *lens_ipow(begin_y, 2) + -1.58036 *begin_y*begin_dy + -0.481316 *begin_x*begin_dx + -10.2053 *lens_ipow(begin_dx, 2) + -31.2145 *lens_ipow(begin_dy, 2) + 0.00147169 *begin_x*lens_ipow(begin_y, 2)*begin_dx + 9.99213 *lens_ipow(begin_dy, 4) + 0.168823 *begin_x*begin_y*begin_dx*begin_dy + -0.0213895 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + 0.000148138 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + 0.00780039 *lens_ipow(begin_x, 2)*begin_y*begin_dy + 0.000409822 *lens_ipow(begin_y, 3)*begin_dy + 13.8205 *lens_ipow(begin_dx, 6) + 0.00350062 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 5)+0.0f;
  Eigen::Matrix2d invJ;
  const double invdet = 1.0f/(dx1_domega0(0, 0)*dx1_domega0(1, 1) - dx1_domega0(0, 1)*dx1_domega0(1, 0));
  invJ(0, 0) =  dx1_domega0(1, 1)*invdet;
  invJ(1, 1) =  dx1_domega0(0, 0)*invdet;
  invJ(0, 1) = -dx1_domega0(0, 1)*invdet;
  invJ(1, 0) = -dx1_domega0(1, 0)*invdet;
  const Eigen::Vector2d dx1(out_x - pred_x, out_y - pred_y);
  for(int i=0;i<2;i++)
  {
    dx += invJ(0, i)*dx1(i);
    dy += invJ(1, i)*dx1(i);
  }
  sqr_err = dx1(0)*dx1(0) + dx1(1)*dx1(1);
}
out_dx = pred_dx;
out_dy = pred_dy;
} break;
