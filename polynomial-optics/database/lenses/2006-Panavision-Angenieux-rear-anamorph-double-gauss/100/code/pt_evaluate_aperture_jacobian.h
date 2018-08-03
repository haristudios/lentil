case Panavision_Angenieux_rear_anamorph_double_gauss_2006_100mm:
{
const float dx00 =  + 0.818807  + 0.221262 *lens_ipow(lambda, 2) + -0.275061 *lens_ipow(dy, 2) + -0.59124 *lens_ipow(dx, 2) + -5.12867e-05 *lens_ipow(y, 2) + 0.0366087 *x*dx + 0.000972773 *lens_ipow(x, 2) + -0.216147 *lens_ipow(lambda, 3) + 1.12763 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + 5.7398 *lens_ipow(dx, 4) + 0.0200819 *x*dx*lens_ipow(dy, 2) + 0.852386 *x*lens_ipow(dx, 3) + 0.0356178 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.00062822 *lens_ipow(x, 3)*dx + 4.23978e-06 *lens_ipow(x, 4) + -0.280172 *lens_ipow(dy, 4)*lambda + -0.0141558 *y*lens_ipow(dy, 3)*lambda + 1.52426e-08 *x*lens_ipow(y, 4)*dx+0.0f;
const float dx01 =  + -0.0734648 *dx*dy + 0.00251214 *y*dx + -0.000102573 *x*y + -0.469337 *dx*lens_ipow(dy, 3) + -0.0141558 *x*lens_ipow(dy, 3)*lambda + 3.04852e-08 *lens_ipow(x, 2)*lens_ipow(y, 3)*dx + -0.0478524 *y*lens_ipow(dx, 5)*lens_ipow(lambda, 2)+0.0f;
const float dx02 =  + 74.0947  + 17.151 *lambda + -11.7868 *lens_ipow(lambda, 2) + -43.368 *lens_ipow(dy, 2) + -161.609 *lens_ipow(dx, 2) + -0.0734648 *y*dy + 0.00125607 *lens_ipow(y, 2) + -1.18248 *x*dx + 0.0183043 *lens_ipow(x, 2) + 156.895 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.469337 *y*lens_ipow(dy, 3) + 2.25525 *x*dx*lens_ipow(dy, 2) + 22.9592 *x*lens_ipow(dx, 3) + 0.010041 *lens_ipow(x, 2)*lens_ipow(dy, 2) + 1.27858 *lens_ipow(x, 2)*lens_ipow(dx, 2) + 0.0237452 *lens_ipow(x, 3)*dx + 0.000157055 *lens_ipow(x, 4) + 7.6213e-09 *lens_ipow(x, 2)*lens_ipow(y, 4) + -0.119631 *lens_ipow(y, 2)*lens_ipow(dx, 4)*lens_ipow(lambda, 2)+0.0f;
const float dx03 =  + -86.7359 *dx*dy + -0.0734648 *y*dx + -0.550122 *x*dy + 104.597 *lens_ipow(dx, 3)*dy + -1.40801 *y*dx*lens_ipow(dy, 2) + 2.25525 *x*lens_ipow(dx, 2)*dy + 0.0200819 *lens_ipow(x, 2)*dx*dy + -1.12069 *x*lens_ipow(dy, 3)*lambda + -0.0424673 *x*y*lens_ipow(dy, 2)*lambda+0.0f;
const float dx04 =  + 17.151 *dx + -23.5737 *dx*lambda + 0.442523 *x*lambda + -0.648441 *x*lens_ipow(lambda, 2) + -0.280172 *x*lens_ipow(dy, 4) + -0.0141558 *x*y*lens_ipow(dy, 3) + -0.0478524 *lens_ipow(y, 2)*lens_ipow(dx, 5)*lambda+0.0f;
const float dx10 =  + -0.133143 *dx*dy + -4.50967e-05 *x*y + -1.10999 *dx*lens_ipow(dy, 3) + -0.443053 *lens_ipow(dx, 3)*dy + -0.0850122 *x*lens_ipow(dy, 5) + 2.22528e-09 *lens_ipow(y, 7)*dx*lens_ipow(dy, 2) + 7.82131e-11 *lens_ipow(y, 8)*dx*dy + 7.08393e-13 *lens_ipow(y, 9)*dx+0.0f;
const float dx11 =  + 0.217599  + 0.116672 *lambda + -0.189918 *lens_ipow(dy, 2) + -0.193803 *lens_ipow(dx, 2) + -0.00825744 *y*dy + -0.000544629 *lens_ipow(y, 2) + -2.25484e-05 *lens_ipow(x, 2) + -0.0800835 *lens_ipow(lambda, 3) + -1.00074 *lens_ipow(dy, 4) + -0.000113754 *lens_ipow(y, 3)*dy + -2.54075e-06 *lens_ipow(y, 4) + 0.864555 *lens_ipow(dy, 4)*lambda + 0.639929 *lens_ipow(dx, 2)*lens_ipow(dy, 2)*lambda + -0.00235829 *lens_ipow(y, 2)*lens_ipow(dy, 2)*lambda + 1.05093e-06 *lens_ipow(y, 4)*lambda + 0.608564 *lens_ipow(dx, 6) + 1.5577e-08 *x*lens_ipow(y, 6)*dx*lens_ipow(dy, 2) + 6.25705e-10 *x*lens_ipow(y, 7)*dx*dy + 6.37553e-12 *x*lens_ipow(y, 8)*dx+0.0f;
const float dx12 =  + -73.8399 *dx*dy + -0.387606 *y*dx + -0.133143 *x*dy + -1.10999 *x*lens_ipow(dy, 3) + -1.32916 *x*lens_ipow(dx, 2)*dy + 1.27986 *y*dx*lens_ipow(dy, 2)*lambda + 3.65139 *y*lens_ipow(dx, 5) + 2.22528e-09 *x*lens_ipow(y, 7)*lens_ipow(dy, 2) + 7.82131e-11 *x*lens_ipow(y, 8)*dy + 7.08393e-13 *x*lens_ipow(y, 9)+0.0f;
const float dx13 =  + 55.4062  + 13.4827 *lambda + -9.17618 *lens_ipow(lambda, 2) + -100.03 *lens_ipow(dy, 2) + -36.9199 *lens_ipow(dx, 2) + -0.379836 *y*dy + -0.00412872 *lens_ipow(y, 2) + -0.133143 *x*dx + -4.00295 *y*lens_ipow(dy, 3) + -2.84384e-05 *lens_ipow(y, 4) + -3.32997 *x*dx*lens_ipow(dy, 2) + -0.443053 *x*lens_ipow(dx, 3) + 3.45822 *y*lens_ipow(dy, 3)*lambda + 1.27986 *y*lens_ipow(dx, 2)*dy*lambda + -0.0015722 *lens_ipow(y, 3)*dy*lambda + -0.21253 *lens_ipow(x, 2)*lens_ipow(dy, 4) + 4.45056e-09 *x*lens_ipow(y, 7)*dx*dy + 7.82131e-11 *x*lens_ipow(y, 8)*dx+0.0f;
const float dx14 =  + 13.4827 *dy + 0.116672 *y + -18.3524 *dy*lambda + -0.240251 *y*lens_ipow(lambda, 2) + 0.864555 *y*lens_ipow(dy, 4) + 0.639929 *y*lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.000786098 *lens_ipow(y, 3)*lens_ipow(dy, 2) + 2.10186e-07 *lens_ipow(y, 5)+0.0f;
const float dx20 =  + -0.00687199  + 0.00081968 *lambda + -0.00845076 *lens_ipow(dy, 2) + -0.0349133 *lens_ipow(dx, 2) + -6.56509e-05 *y*dy + -2.39273e-06 *lens_ipow(y, 2) + -0.00024665 *x*dx + 1.10809e-06 *lens_ipow(y, 2)*lambda + 3.58935e-05 *lens_ipow(x, 2)*lambda + 4.59521e-06 *lens_ipow(y, 2)*lens_ipow(dy, 2) + -3.35594e-05 *lens_ipow(x, 2)*lens_ipow(lambda, 2) + -0.0200649 *lens_ipow(dx, 4)*lambda + -8.58316 *lens_ipow(dx, 6) + -3.3344e-12 *lens_ipow(y, 6) + -0.496213 *x*lens_ipow(dx, 5) + -0.00978819 *lens_ipow(x, 2)*lens_ipow(dx, 4) + -6.69304e-05 *lens_ipow(x, 3)*lens_ipow(dx, 3) + 0.000112547 *lens_ipow(x, 2)*lens_ipow(dx, 2)*lens_ipow(lambda, 6)+0.0f;
const float dx21 =  + -0.0116692 *dx*dy + -6.56509e-05 *x*dy + -4.78546e-06 *x*y + 2.21618e-06 *x*y*lambda + -0.0132191 *lens_ipow(dx, 3)*dy + 0.000735631 *y*dx*lens_ipow(dy, 2) + 9.19042e-06 *x*y*lens_ipow(dy, 2) + -0.0268656 *dx*lens_ipow(dy, 5) + -2.00064e-11 *x*lens_ipow(y, 5) + 2.97566e-06 *lens_ipow(y, 3)*lens_ipow(dx, 3)*lambda+0.0f;
const float dx22 =  + 0.57257  + 0.0120443 *lens_ipow(lambda, 2) + -0.7231 *lens_ipow(dy, 2) + -3.12535 *lens_ipow(dx, 2) + -0.0116692 *y*dy + -0.0698265 *x*dx + -0.000123325 *lens_ipow(x, 2) + -0.0396572 *y*lens_ipow(dx, 2)*dy + 0.000367816 *lens_ipow(y, 2)*lens_ipow(dy, 2) + -0.0802597 *x*lens_ipow(dx, 3)*lambda + -792.105 *lens_ipow(dx, 6) + -0.0268656 *y*lens_ipow(dy, 5) + -51.499 *x*lens_ipow(dx, 5) + -1.24053 *lens_ipow(x, 2)*lens_ipow(dx, 4) + -0.0130509 *lens_ipow(x, 3)*lens_ipow(dx, 3) + -5.01978e-05 *lens_ipow(x, 4)*lens_ipow(dx, 2) + 2.23175e-06 *lens_ipow(y, 4)*lens_ipow(dx, 2)*lambda + 7.50316e-05 *lens_ipow(x, 3)*dx*lens_ipow(lambda, 6)+0.0f;
const float dx23 =  + -1.4462 *dx*dy + -0.0116692 *y*dx + -0.0169015 *x*dy + -6.56509e-05 *x*y + -0.0132191 *y*lens_ipow(dx, 3) + 0.000735631 *lens_ipow(y, 2)*dx*dy + 9.19042e-06 *x*lens_ipow(y, 2)*dy + -0.134328 *y*dx*lens_ipow(dy, 4)+0.0f;
const float dx24 =  + 0.00081968 *x + 0.0240887 *dx*lambda + 1.10809e-06 *x*lens_ipow(y, 2) + 1.19645e-05 *lens_ipow(x, 3) + -2.23729e-05 *lens_ipow(x, 3)*lambda + -0.0200649 *x*lens_ipow(dx, 4) + 7.43916e-07 *lens_ipow(y, 4)*lens_ipow(dx, 3) + 0.000225095 *lens_ipow(x, 3)*lens_ipow(dx, 2)*lens_ipow(lambda, 5)+0.0f;
const float dx30 =  + -0.0202988 *dx*dy + -0.000138511 *y*dx + -0.000333588 *x*dy + -3.48124e-06 *x*y + -0.0149938 *dx*lens_ipow(dy, 3) + 2.05681e-07 *lens_ipow(y, 3)*dx + 0.000272013 *x*lens_ipow(dx, 2)*dy + -1.84602e-07 *x*lens_ipow(y, 2)*dy + -0.655116 *lens_ipow(dx, 3)*lens_ipow(dy, 3)*lambda + 0.000426938 *lens_ipow(x, 2)*dx*lens_ipow(dy, 3)*lambda+0.0f;
const float dx31 =  + -0.0167207  + 0.00579195 *lambda + -0.00423897 *lens_ipow(lambda, 2) + -0.0132002 *lens_ipow(dy, 2) + -0.0104672 *lens_ipow(dx, 2) + -1.16611e-05 *lens_ipow(y, 2) + -0.000138511 *x*dx + -1.74062e-06 *lens_ipow(x, 2) + 4.07075e-06 *lens_ipow(y, 2)*lambda + -0.0133959 *lens_ipow(dy, 4) + -9.60968e-07 *lens_ipow(y, 3)*dy + -3.72272e-08 *lens_ipow(y, 4) + 6.17042e-07 *x*lens_ipow(y, 2)*dx + -1.84602e-07 *lens_ipow(x, 2)*y*dy + 0.00137238 *y*lens_ipow(dy, 5)+0.0f;
const float dx32 =  + -0.0209345 *y*dx + -0.0202988 *x*dy + -0.000138511 *x*y + -9.69818 *dx*dy*lambda + 17.9629 *dx*dy*lens_ipow(lambda, 2) + -0.0149938 *x*lens_ipow(dy, 3) + 2.05681e-07 *x*lens_ipow(y, 3) + 0.000272013 *lens_ipow(x, 2)*dx*dy + -10.8716 *dx*dy*lens_ipow(lambda, 3) + -69.119 *lens_ipow(dx, 3)*lens_ipow(dy, 3)*lambda + -1.96535 *x*lens_ipow(dx, 2)*lens_ipow(dy, 3)*lambda + 0.000142313 *lens_ipow(x, 3)*lens_ipow(dy, 3)*lambda+0.0f;
const float dx33 =  + 0.415398  + -0.0106857 *lambda + -1.32713 *lens_ipow(dy, 2) + -0.0264005 *y*dy + -0.0202988 *x*dx + -0.000166794 *lens_ipow(x, 2) + -4.84909 *lens_ipow(dx, 2)*lambda + 8.98146 *lens_ipow(dx, 2)*lens_ipow(lambda, 2) + -0.0535834 *y*lens_ipow(dy, 3) + -2.40242e-07 *lens_ipow(y, 4) + -0.0449813 *x*dx*lens_ipow(dy, 2) + 0.000136006 *lens_ipow(x, 2)*lens_ipow(dx, 2) + -9.2301e-08 *lens_ipow(x, 2)*lens_ipow(y, 2) + -5.43581 *lens_ipow(dx, 2)*lens_ipow(lambda, 3) + 0.00343095 *lens_ipow(y, 2)*lens_ipow(dy, 4) + -51.8392 *lens_ipow(dx, 4)*lens_ipow(dy, 2)*lambda + -1.96535 *x*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lambda + 0.000426938 *lens_ipow(x, 3)*dx*lens_ipow(dy, 2)*lambda+0.0f;
const float dx34 =  + -0.0106857 *dy + 0.00579195 *y + -0.00847795 *y*lambda + -4.84909 *lens_ipow(dx, 2)*dy + 1.35692e-06 *lens_ipow(y, 3) + 17.9629 *lens_ipow(dx, 2)*dy*lambda + -16.3074 *lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2) + -17.2797 *lens_ipow(dx, 4)*lens_ipow(dy, 3) + -0.655116 *x*lens_ipow(dx, 3)*lens_ipow(dy, 3) + 0.000142313 *lens_ipow(x, 3)*dx*lens_ipow(dy, 3)+0.0f;
const float dx40 =  + 0.000395483 *y*dx*dy + 7.47126e-06 *x*y*dy + -6.20723e-08 *lens_ipow(x, 3) + -0.00691462 *dx*lens_ipow(dy, 2)*lambda + -0.335736 *lens_ipow(dx, 5) + -0.0774972 *x*lens_ipow(dx, 6) + -0.00570511 *lens_ipow(x, 2)*lens_ipow(dx, 7) + -0.00182785 *lens_ipow(y, 2)*lens_ipow(dx, 3)*lens_ipow(dy, 4)*lambda + 6.12939e-06 *lens_ipow(y, 4)*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lambda + 1.81665e-07 *lens_ipow(y, 5)*lens_ipow(dx, 3)*dy*lambda + 1.45643e-09 *lens_ipow(y, 6)*lens_ipow(dx, 3)*lambda+0.0f;
const float dx41 =  + 0.000468757 *dy + 2.90175e-05 *y + -0.00784397 *lens_ipow(dy, 3) + -0.00225872 *y*lens_ipow(dy, 2) + -0.000405935 *y*lens_ipow(dx, 2) + -0.000111039 *lens_ipow(y, 2)*dy + -1.59518e-06 *lens_ipow(y, 3) + 0.000395483 *x*dx*dy + 3.73563e-06 *lens_ipow(x, 2)*dy + -0.0036557 *x*y*lens_ipow(dx, 3)*lens_ipow(dy, 4)*lambda + 2.45175e-05 *x*lens_ipow(y, 3)*lens_ipow(dx, 3)*lens_ipow(dy, 2)*lambda + 9.08327e-07 *x*lens_ipow(y, 4)*lens_ipow(dx, 3)*dy*lambda + 8.73857e-09 *x*lens_ipow(y, 5)*lens_ipow(dx, 3)*lambda+0.0f;
const float dx42 =  + -0.000405935 *lens_ipow(y, 2)*dx + 0.000395483 *x*y*dy + -2.90661 *dx*lens_ipow(dy, 2)*lambda + -0.00691462 *x*lens_ipow(dy, 2)*lambda + 1.80614 *dx*lens_ipow(dy, 2)*lens_ipow(lambda, 2) + -83.9602 *lens_ipow(dx, 5) + -1.67868 *x*lens_ipow(dx, 4) + 481.442 *lens_ipow(dx, 7) + -0.232492 *lens_ipow(x, 2)*lens_ipow(dx, 5) + -1066.24 *lens_ipow(dx, 9) + -0.0133119 *lens_ipow(x, 3)*lens_ipow(dx, 6) + -0.00548354 *x*lens_ipow(y, 2)*lens_ipow(dx, 2)*lens_ipow(dy, 4)*lambda + 1.83882e-05 *x*lens_ipow(y, 4)*lens_ipow(dx, 2)*lens_ipow(dy, 2)*lambda + 5.44996e-07 *x*lens_ipow(y, 5)*lens_ipow(dx, 2)*dy*lambda + 4.36929e-09 *x*lens_ipow(y, 6)*lens_ipow(dx, 2)*lambda+0.0f;
const float dx43 =  + 0.000468757 *y + -0.0235319 *y*lens_ipow(dy, 2) + -0.00225872 *lens_ipow(y, 2)*dy + -3.70131e-05 *lens_ipow(y, 3) + 0.000395483 *x*y*dx + 3.73563e-06 *lens_ipow(x, 2)*y + -2.90661 *lens_ipow(dx, 2)*dy*lambda + -0.0138292 *x*dx*dy*lambda + 1.80614 *lens_ipow(dx, 2)*dy*lens_ipow(lambda, 2) + -1.84757 *lens_ipow(dy, 5)*lambda + -0.00731139 *x*lens_ipow(y, 2)*lens_ipow(dx, 3)*lens_ipow(dy, 3)*lambda + 1.22588e-05 *x*lens_ipow(y, 4)*lens_ipow(dx, 3)*dy*lambda + 1.81665e-07 *x*lens_ipow(y, 5)*lens_ipow(dx, 3)*lambda+0.0f;
const float dx44 =  + 1.09  + -2.97255 *lambda + 6.51151 *lens_ipow(lambda, 3) + -5.0245 *lens_ipow(lambda, 4) + -1.4533 *lens_ipow(dx, 2)*lens_ipow(dy, 2) + -0.00691462 *x*dx*lens_ipow(dy, 2) + 1.80614 *lens_ipow(dx, 2)*lens_ipow(dy, 2)*lambda + -0.307929 *lens_ipow(dy, 6) + -0.00182785 *x*lens_ipow(y, 2)*lens_ipow(dx, 3)*lens_ipow(dy, 4) + 6.12939e-06 *x*lens_ipow(y, 4)*lens_ipow(dx, 3)*lens_ipow(dy, 2) + 1.81665e-07 *x*lens_ipow(y, 5)*lens_ipow(dx, 3)*dy + 1.45643e-09 *x*lens_ipow(y, 6)*lens_ipow(dx, 3)+0.0f;
} break;
