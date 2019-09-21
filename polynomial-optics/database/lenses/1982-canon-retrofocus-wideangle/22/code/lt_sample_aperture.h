case canon__retrofocus_wideangle__1982__22mm:
{
//input: scene_[x,y,z] - point in scene, ap_[x,y] - point on aperture
//output: [x,y,dx,dy] point and direction on sensor
Eigen::Vector3d view(
  scene_x,
  scene_y,
  scene_z + camera->lens_outer_pupil_curvature_radius
);
raytrace_normalise(view);
int error = 0;
if(1 || view(2) >= camera->lens_field_of_view)
{
  const double eps = 1e-8;
  double sqr_err = 1e30, sqr_ap_err = 1e30;
  double prev_sqr_err = 1e32, prev_sqr_ap_err = 1e32;
  for(int k=0;k<100&&(sqr_err>eps||sqr_ap_err>eps)&&error==0;k++)
  {
    prev_sqr_err = sqr_err, prev_sqr_ap_err = sqr_ap_err;
    const double begin_x = x;
    const double begin_y = y;
    const double begin_dx = dx;
    const double begin_dy = dy;
    const double begin_lambda = lambda;
    const Eigen::Vector2d pred_ap(
       + 48.1578 *begin_dx + 0.613031 *begin_x + -0.0839772 *begin_x*begin_lambda + -0.57328 *begin_dx*begin_lambda + 0.0895654 *lens_ipow(begin_x, 2)*begin_dx + 41.9773 *lens_ipow(begin_dx, 3) + 0.0565976 *begin_x*lens_ipow(begin_lambda, 2) + 0.000583207 *lens_ipow(begin_x, 3) + 1.07509 *begin_x*lens_ipow(begin_dy, 2) + 3.89284 *begin_x*lens_ipow(begin_dx, 2) + 0.00322293 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + -6.35753e-05 *lens_ipow(begin_x, 3)*begin_lambda + 0.311239 *begin_x*begin_y*begin_dy*begin_lambda + -0.00847645 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + 0.159969 *lens_ipow(begin_y, 2)*begin_dx*begin_lambda + 147.044 *begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + 10.4036 *begin_y*begin_dx*begin_dy*begin_lambda + -0.00611725 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + -0.273365 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -0.229269 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_lambda, 2) + -0.579317 *begin_x*begin_y*begin_dy*lens_ipow(begin_lambda, 2) + -336.453 *begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 3) + -35.8344 *begin_y*begin_dx*begin_dy*lens_ipow(begin_lambda, 3) + 0.00376051 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 3) + 0.350891 *begin_x*begin_y*begin_dy*lens_ipow(begin_lambda, 3) + 32.4265 *begin_y*begin_dx*begin_dy*lens_ipow(begin_lambda, 4) + 0.130058 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_lambda, 4) + 336.919 *begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5),
       + 0.644098 *begin_y + 49.0425 *begin_dy + -2.58483 *begin_dy*begin_lambda + -0.198617 *begin_y*begin_lambda + 2.0023 *begin_x*begin_dx*begin_dy + 0.0389764 *begin_x*begin_y*begin_dx + 0.160109 *begin_y*lens_ipow(begin_lambda, 2) + 0.000547991 *lens_ipow(begin_x, 2)*begin_y + 0.0305401 *lens_ipow(begin_x, 2)*begin_dy + 14.6429 *begin_y*lens_ipow(begin_dy, 2)*begin_lambda + 3.91753 *begin_y*lens_ipow(begin_dx, 2)*begin_lambda + 102.205 *lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + 100.528 *lens_ipow(begin_dy, 3)*begin_lambda + 0.394861 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 0.00273144 *lens_ipow(begin_y, 3)*begin_lambda + 0.0560982 *begin_x*begin_y*begin_dx*begin_lambda + 1.97671 *begin_x*begin_dx*begin_dy*begin_lambda + -0.559247 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 2) + -3.49226 *begin_y*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -0.0503121 *begin_x*begin_y*begin_dx*lens_ipow(begin_lambda, 2) + -0.00427725 *lens_ipow(begin_y, 3)*lens_ipow(begin_lambda, 2) + -13.7314 *begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + -2.06748 *begin_x*begin_dx*begin_dy*lens_ipow(begin_lambda, 3) + 0.228928 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 3) + 0.00207471 *lens_ipow(begin_y, 3)*lens_ipow(begin_lambda, 3) + -138.474 *lens_ipow(begin_dx, 2)*begin_dy*lens_ipow(begin_lambda, 4) + 5.99617 *begin_dy*lens_ipow(begin_lambda, 6) + -215.631 *lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 5)
    );
    const Eigen::Vector2d delta_ap(ap_x - pred_ap[0], ap_y - pred_ap[1]);
    sqr_ap_err = delta_ap[0]*delta_ap[0]+delta_ap[1]*delta_ap[1];
    Eigen::Matrix2d dx1_domega0;
    dx1_domega0(0, 0) =  + 48.1578  + -0.57328 *begin_lambda + 0.0895654 *lens_ipow(begin_x, 2) + 125.932 *lens_ipow(begin_dx, 2) + 7.78569 *begin_x*begin_dx + -0.00847645 *lens_ipow(begin_x, 2)*begin_lambda + 0.159969 *lens_ipow(begin_y, 2)*begin_lambda + 147.044 *lens_ipow(begin_dy, 2)*begin_lambda + 10.4036 *begin_y*begin_dy*begin_lambda + -0.54673 *begin_x*begin_dx*lens_ipow(begin_lambda, 2) + -0.229269 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + -336.453 *lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 3) + -35.8344 *begin_y*begin_dy*lens_ipow(begin_lambda, 3) + 32.4265 *begin_y*begin_dy*lens_ipow(begin_lambda, 4) + 0.130058 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 4) + 336.919 *lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5)+0.0f;
    dx1_domega0(0, 1) =  + 2.15017 *begin_x*begin_dy + 0.311239 *begin_x*begin_y*begin_lambda + 294.088 *begin_dx*begin_dy*begin_lambda + 10.4036 *begin_y*begin_dx*begin_lambda + -0.579317 *begin_x*begin_y*lens_ipow(begin_lambda, 2) + -672.906 *begin_dx*begin_dy*lens_ipow(begin_lambda, 3) + -35.8344 *begin_y*begin_dx*lens_ipow(begin_lambda, 3) + 0.350891 *begin_x*begin_y*lens_ipow(begin_lambda, 3) + 32.4265 *begin_y*begin_dx*lens_ipow(begin_lambda, 4) + 673.838 *begin_dx*begin_dy*lens_ipow(begin_lambda, 5)+0.0f;
    dx1_domega0(1, 0) =  + 2.0023 *begin_x*begin_dy + 0.0389764 *begin_x*begin_y + 7.83506 *begin_y*begin_dx*begin_lambda + 204.409 *begin_dx*begin_dy*begin_lambda + 0.0560982 *begin_x*begin_y*begin_lambda + 1.97671 *begin_x*begin_dy*begin_lambda + -6.98452 *begin_y*begin_dx*lens_ipow(begin_lambda, 2) + -0.0503121 *begin_x*begin_y*lens_ipow(begin_lambda, 2) + -2.06748 *begin_x*begin_dy*lens_ipow(begin_lambda, 3) + -276.947 *begin_dx*begin_dy*lens_ipow(begin_lambda, 4)+0.0f;
    dx1_domega0(1, 1) =  + 49.0425  + -2.58483 *begin_lambda + 2.0023 *begin_x*begin_dx + 0.0305401 *lens_ipow(begin_x, 2) + 29.2857 *begin_y*begin_dy*begin_lambda + 102.205 *lens_ipow(begin_dx, 2)*begin_lambda + 301.585 *lens_ipow(begin_dy, 2)*begin_lambda + 0.394861 *lens_ipow(begin_y, 2)*begin_lambda + 1.97671 *begin_x*begin_dx*begin_lambda + -0.559247 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + -27.4629 *begin_y*begin_dy*lens_ipow(begin_lambda, 2) + -2.06748 *begin_x*begin_dx*lens_ipow(begin_lambda, 3) + 0.228928 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 3) + -138.474 *lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 4) + 5.99617 *lens_ipow(begin_lambda, 6) + -646.894 *lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 5)+0.0f;
    Eigen::Matrix2d invApJ;
    const double invdetap = 1.0f/(dx1_domega0(0, 0)*dx1_domega0(1, 1) - dx1_domega0(0, 1)*dx1_domega0(1, 0));
    invApJ(0, 0) =  dx1_domega0(1, 1)*invdetap;
    invApJ(1, 1) =  dx1_domega0(0, 0)*invdetap;
    invApJ(0, 1) = -dx1_domega0(0, 1)*invdetap;
    invApJ(1, 0) = -dx1_domega0(1, 0)*invdetap;
    for(int i=0;i<2;i++)
    {
      dx += invApJ(0, i)*delta_ap[i];
      dy += invApJ(1, i)*delta_ap[i];
    }
    out(0) =  + 22.2376 *begin_dx + -1.71865 *begin_x + -0.119325 *begin_x*begin_lambda + 1.23511 *begin_y*begin_dx*begin_dy + 0.0427786 *begin_x*begin_y*begin_dy + 32.2129 *begin_dx*lens_ipow(begin_dy, 2) + 0.0014811 *begin_x*lens_ipow(begin_y, 2) + 0.00143489 *lens_ipow(begin_x, 3) + 0.835491 *begin_x*lens_ipow(begin_dy, 2) + 0.0311129 *lens_ipow(begin_y, 2)*begin_dx + 0.153196 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + -9.63772e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2) + -0.123432 *begin_x*begin_y*lens_ipow(begin_dx, 2)*begin_dy + 0.000132257 *lens_ipow(begin_x, 4)*begin_dx + -5.36489 *begin_dx*lens_ipow(begin_lambda, 4) + 5.01037 *begin_x*lens_ipow(begin_dx, 2)*lens_ipow(begin_lambda, 2) + -5.25898e-07 *begin_x*lens_ipow(begin_y, 4) + -2.05728e-05 *begin_x*lens_ipow(begin_y, 3)*begin_dy + 0.00550925 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + -0.10694 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_lambda, 3) + 0.237375 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3)*begin_lambda + 0.311997 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3)*begin_lambda + 0.0275717 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2)*begin_lambda + 0.025474 *lens_ipow(begin_x, 3)*lens_ipow(begin_dy, 4) + 1.93785 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 4) + 2.0234 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 3) + 473.406 *lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 5) + -7702.56 *lens_ipow(begin_dx, 5)*lens_ipow(begin_lambda, 6);
    out(1) =  + -1.7306 *begin_y + 21.5639 *begin_dy + -0.10273 *begin_y*begin_lambda + 0.945742 *begin_y*lens_ipow(begin_dx, 2) + 1.39647 *begin_x*begin_dx*begin_dy + 0.0474701 *begin_x*begin_y*begin_dx + 35.1897 *lens_ipow(begin_dx, 2)*begin_dy + 0.00151675 *lens_ipow(begin_x, 2)*begin_y + 0.0014777 *lens_ipow(begin_y, 3) + 0.03234 *lens_ipow(begin_x, 2)*begin_dy + 81.877 *lens_ipow(begin_dy, 3)*begin_lambda + 0.222865 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + 0.000110255 *lens_ipow(begin_y, 4)*begin_dy + -10.2214 *begin_x*begin_dx*lens_ipow(begin_dy, 3) + -0.346474 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 2) + -8.6955e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + -2.2112e-05 *lens_ipow(begin_x, 3)*begin_y*begin_dx + -5.45294e-07 *lens_ipow(begin_x, 4)*begin_y + 24.852 *begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 2) + 0.0288702 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 2)*begin_lambda + -0.291897 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 3) + -33.225 *begin_y*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 3) + 2.54688 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 4)*begin_dy + 0.0261418 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 4) + 2.5236 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 2) + 83.3103 *begin_y*lens_ipow(begin_dy, 4)*lens_ipow(begin_lambda, 3) + -1.71805e-06 *lens_ipow(begin_y, 5)*lens_ipow(begin_lambda, 4) + -349.81 *lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 6);
    out(2) =  + -0.391512 *begin_dx + -0.0160916 *begin_x + 0.00761171 *begin_x*begin_lambda + -0.0110625 *begin_dx*begin_lambda + -0.00522146 *begin_x*lens_ipow(begin_lambda, 2) + 1.35083 *lens_ipow(begin_dx, 3)*begin_lambda + -1.06233e-05 *begin_x*lens_ipow(begin_y, 2)*begin_lambda + 1.46493e-05 *lens_ipow(begin_x, 3)*begin_lambda + -0.000944104 *begin_x*begin_y*begin_dy*begin_lambda + -0.000989438 *lens_ipow(begin_x, 2)*begin_dx*begin_lambda + 0.982768 *begin_dx*lens_ipow(begin_dy, 2)*begin_lambda + 0.022065 *begin_y*begin_dx*begin_dy*begin_lambda + -2.99682e-07 *lens_ipow(begin_x, 4)*begin_dx + -0.0207708 *begin_y*begin_dx*begin_dy*lens_ipow(begin_lambda, 2) + -1.03258 *lens_ipow(begin_dx, 3)*lens_ipow(begin_lambda, 2) + 8.70007e-06 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + -4.04777e-05 *lens_ipow(begin_y, 2)*begin_dx*lens_ipow(begin_lambda, 2) + 0.000791159 *begin_x*begin_y*begin_dy*lens_ipow(begin_lambda, 2) + 0.000845478 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_lambda, 2) + -5.60177e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_lambda, 3) + -2.36604e-08 *lens_ipow(begin_x, 5)*begin_lambda + -3.72422e-06 *lens_ipow(begin_x, 3)*begin_y*lens_ipow(begin_dx, 2)*begin_dy + 5.18339e-05 *lens_ipow(begin_x, 3)*lens_ipow(begin_lambda, 4) + 0.00038996 *lens_ipow(begin_x, 2)*begin_y*begin_dx*lens_ipow(begin_dy, 3) + -1.16197 *begin_dx*lens_ipow(begin_dy, 2)*lens_ipow(begin_lambda, 4) + 2.14141e-08 *lens_ipow(begin_x, 5)*lens_ipow(begin_lambda, 2) + -2.33183e-14 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 4) + -0.00355775 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 4);
    out(3) =  + -0.0159347 *begin_y + -0.392631 *begin_dy + -0.00839466 *begin_dy*begin_lambda + 0.00714237 *begin_y*begin_lambda + -0.00383367 *begin_y*lens_ipow(begin_dx, 2) + 0.00412535 *begin_x*begin_dx*begin_dy + 0.526882 *lens_ipow(begin_dx, 2)*begin_dy + -0.0048891 *begin_y*lens_ipow(begin_lambda, 2) + 1.01153e-05 *lens_ipow(begin_x, 2)*begin_y + 3.49819e-06 *lens_ipow(begin_y, 3) + -0.000198233 *lens_ipow(begin_x, 2)*begin_dy + 0.410226 *lens_ipow(begin_dy, 3) + -0.00106883 *lens_ipow(begin_y, 2)*begin_dy*begin_lambda + -3.1186e-07 *lens_ipow(begin_y, 4)*begin_dy + -5.74895e-07 *begin_x*lens_ipow(begin_y, 3)*begin_dx + -1.45176e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 3) + -4.45376e-07 *lens_ipow(begin_x, 3)*begin_y*begin_dx + -1.30458e-08 *lens_ipow(begin_x, 4)*begin_y + -6.17347e-09 *lens_ipow(begin_y, 5) + 5.19267e-05 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dy, 2)*begin_lambda + -2.04353e-05 *lens_ipow(begin_y, 3)*lens_ipow(begin_dx, 2)*begin_lambda + 0.00374771 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 3) + 1.86085e-07 *lens_ipow(begin_x, 3)*lens_ipow(begin_y, 2)*begin_dx*begin_dy + 0.00170237 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 2) + -0.00338798 *lens_ipow(begin_y, 2)*begin_dy*lens_ipow(begin_lambda, 4) + 2.7902e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -5.71809e-08 *lens_ipow(begin_x, 4)*begin_y*lens_ipow(begin_dy, 2)*begin_lambda + 0.00163444 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3)*begin_dy*lens_ipow(begin_lambda, 3);
    Eigen::Vector3d pred_out_cs_pos(0,0,0);
    Eigen::Vector3d pred_out_cs_dir(0,0,0);
    Eigen::Vector2d outpos(out(0), out(1));
    Eigen::Vector2d outdir(out(2), out(3));
    if (camera->lens_outer_pupil_geometry == "cyl-y") cylinderToCs(outpos, outdir, pred_out_cs_pos, pred_out_cs_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius, true);
    else if (camera->lens_outer_pupil_geometry == "cyl-x") cylinderToCs(outpos, outdir, pred_out_cs_pos, pred_out_cs_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius, false);
    else sphereToCs(outpos, outdir, pred_out_cs_pos, pred_out_cs_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius);
    Eigen::Vector3d view(
      scene_x - pred_out_cs_pos(0),
      scene_y - pred_out_cs_pos(1),
      scene_z - pred_out_cs_pos(2)
    );
    raytrace_normalise(view);
    Eigen::VectorXd out_new(5); out_new.setZero();
    Eigen::Vector2d out_new_pos(0,0);
    Eigen::Vector2d out_new_dir(0,0);
    if (camera->lens_outer_pupil_geometry == "cyl-y") csToCylinder(pred_out_cs_pos, view, out_new_pos, out_new_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius, true);
    else if (camera->lens_outer_pupil_geometry == "cyl-x") csToCylinder(pred_out_cs_pos, view, out_new_pos, out_new_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius, false);
    else csToSphere(pred_out_cs_pos, view, out_new_pos, out_new_dir, - camera->lens_outer_pupil_curvature_radius, camera->lens_outer_pupil_curvature_radius);
    out_new(0) = out_new_pos(0);
    out_new(1) = out_new_pos(1);
    out_new(2) = out_new_dir(0);
    out_new(3) = out_new_dir(1);
    const Eigen::Vector2d delta_out(out_new[2] - out[2], out_new[3] - out[3]);
    sqr_err = delta_out[0]*delta_out[0]+delta_out[1]*delta_out[1];
    Eigen::Matrix2d domega2_dx0;
    domega2_dx0(0, 0) =  + -0.0160916  + 0.00761171 *begin_lambda + -0.00522146 *lens_ipow(begin_lambda, 2) + -1.06233e-05 *lens_ipow(begin_y, 2)*begin_lambda + 4.39479e-05 *lens_ipow(begin_x, 2)*begin_lambda + -0.000944104 *begin_y*begin_dy*begin_lambda + -0.00197888 *begin_x*begin_dx*begin_lambda + -1.19873e-06 *lens_ipow(begin_x, 3)*begin_dx + 8.70007e-06 *lens_ipow(begin_y, 2)*lens_ipow(begin_lambda, 2) + 0.000791159 *begin_y*begin_dy*lens_ipow(begin_lambda, 2) + 0.00169096 *begin_x*begin_dx*lens_ipow(begin_lambda, 2) + -0.000168053 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 3) + -1.18302e-07 *lens_ipow(begin_x, 4)*begin_lambda + -1.11726e-05 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 2)*begin_dy + 0.000155502 *lens_ipow(begin_x, 2)*lens_ipow(begin_lambda, 4) + 0.00077992 *begin_x*begin_y*begin_dx*lens_ipow(begin_dy, 3) + 1.07071e-07 *lens_ipow(begin_x, 4)*lens_ipow(begin_lambda, 2) + -1.16591e-13 *lens_ipow(begin_x, 4)*lens_ipow(begin_y, 4) + -0.0106733 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 4)+0.0f;
    domega2_dx0(0, 1) =  + -2.12466e-05 *begin_x*begin_y*begin_lambda + -0.000944104 *begin_x*begin_dy*begin_lambda + 0.022065 *begin_dx*begin_dy*begin_lambda + -0.0207708 *begin_dx*begin_dy*lens_ipow(begin_lambda, 2) + 1.74001e-05 *begin_x*begin_y*lens_ipow(begin_lambda, 2) + -8.09554e-05 *begin_y*begin_dx*lens_ipow(begin_lambda, 2) + 0.000791159 *begin_x*begin_dy*lens_ipow(begin_lambda, 2) + -3.72422e-06 *lens_ipow(begin_x, 3)*lens_ipow(begin_dx, 2)*begin_dy + 0.00038996 *lens_ipow(begin_x, 2)*begin_dx*lens_ipow(begin_dy, 3) + -9.32732e-14 *lens_ipow(begin_x, 5)*lens_ipow(begin_y, 3)+0.0f;
    domega2_dx0(1, 0) =  + 0.00412535 *begin_dx*begin_dy + 2.02305e-05 *begin_x*begin_y + -0.000396466 *begin_x*begin_dy + -5.74895e-07 *lens_ipow(begin_y, 3)*begin_dx + -2.90351e-08 *begin_x*lens_ipow(begin_y, 3) + -1.33613e-06 *lens_ipow(begin_x, 2)*begin_y*begin_dx + -5.21831e-08 *lens_ipow(begin_x, 3)*begin_y + 0.000103853 *begin_x*begin_y*lens_ipow(begin_dy, 2)*begin_lambda + 5.58254e-07 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2)*begin_dx*begin_dy + 0.00340475 *begin_x*lens_ipow(begin_dy, 3)*lens_ipow(begin_lambda, 2) + 5.5804e-05 *begin_x*lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -2.28724e-07 *lens_ipow(begin_x, 3)*begin_y*lens_ipow(begin_dy, 2)*begin_lambda + 0.00163444 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 3)*begin_dy*lens_ipow(begin_lambda, 3)+0.0f;
    domega2_dx0(1, 1) =  + -0.0159347  + 0.00714237 *begin_lambda + -0.00383367 *lens_ipow(begin_dx, 2) + -0.0048891 *lens_ipow(begin_lambda, 2) + 1.01153e-05 *lens_ipow(begin_x, 2) + 1.04946e-05 *lens_ipow(begin_y, 2) + -0.00213767 *begin_y*begin_dy*begin_lambda + -1.24744e-06 *lens_ipow(begin_y, 3)*begin_dy + -1.72468e-06 *begin_x*lens_ipow(begin_y, 2)*begin_dx + -4.35527e-08 *lens_ipow(begin_x, 2)*lens_ipow(begin_y, 2) + -4.45376e-07 *lens_ipow(begin_x, 3)*begin_dx + -1.30458e-08 *lens_ipow(begin_x, 4) + -3.08674e-08 *lens_ipow(begin_y, 4) + 5.19267e-05 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2)*begin_lambda + -6.13058e-05 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2)*begin_lambda + 0.00749542 *begin_y*begin_dy*lens_ipow(begin_lambda, 3) + 3.72169e-07 *lens_ipow(begin_x, 3)*begin_y*begin_dx*begin_dy + -0.00677595 *begin_y*begin_dy*lens_ipow(begin_lambda, 4) + 5.5804e-05 *lens_ipow(begin_x, 2)*begin_y*lens_ipow(begin_dx, 2)*begin_dy*begin_lambda + -5.71809e-08 *lens_ipow(begin_x, 4)*lens_ipow(begin_dy, 2)*begin_lambda + 0.00326888 *begin_x*begin_y*lens_ipow(begin_dx, 3)*begin_dy*lens_ipow(begin_lambda, 3)+0.0f;
    Eigen::Matrix2d invJ;
    const double invdet = 1.0f/(domega2_dx0(0, 0)*domega2_dx0(1, 1) - domega2_dx0(0, 1)*domega2_dx0(1, 0));
    invJ(0, 0) =  domega2_dx0(1, 1)*invdet;
    invJ(1, 1) =  domega2_dx0(0, 0)*invdet;
    invJ(0, 1) = -domega2_dx0(0, 1)*invdet;
    invJ(1, 0) = -domega2_dx0(1, 0)*invdet;
    for(int i=0;i<2;i++)
    {
      x += 0.72 * invJ(0, i) * delta_out[i];
      y += 0.72 * invJ(1, i) * delta_out[i];
    }
    if(sqr_err>prev_sqr_err) error |= 1;
    if(sqr_ap_err>prev_sqr_ap_err) error |= 2;
    if(out[0]!=out[0]) error |= 4;
    if(out[1]!=out[1]) error |= 8;
    // reset error code for first few iterations.
    if(k<10) error = 0;
  }
}
else
  error = 128;
if(out[0]*out[0]+out[1]*out[1] > camera->lens_outer_pupil_radius*camera->lens_outer_pupil_radius) error |= 16;
const double begin_x = x;
const double begin_y = y;
const double begin_dx = dx;
const double begin_dy = dy;
const double begin_lambda = lambda;
if(error==0)
  out[4] =  + 1.03096 *begin_lambda + -0.000719637 *begin_y*begin_dy + -8.0613e-06 *lens_ipow(begin_y, 2) + -0.0255049 *lens_ipow(begin_dy, 2) + -3.31946e-06 *lens_ipow(begin_x, 2) + -1.42248 *lens_ipow(begin_lambda, 2) + 1.59251 *lens_ipow(begin_lambda, 4) + -2.3359 *lens_ipow(begin_dx, 4) + -0.000162735 *lens_ipow(begin_y, 2)*lens_ipow(begin_dx, 2) + -0.0980637 *begin_x*lens_ipow(begin_dx, 3) + -6.75246 *lens_ipow(begin_dx, 2)*lens_ipow(begin_dy, 2) + -0.00121529 *lens_ipow(begin_x, 2)*lens_ipow(begin_dx, 2) + -0.0731752 *begin_y*lens_ipow(begin_dx, 2)*begin_dy + -8.42098e-06 *lens_ipow(begin_x, 3)*begin_dx + -0.0724556 *begin_x*begin_dx*lens_ipow(begin_dy, 2) + -3.6207e-08 *lens_ipow(begin_x, 4) + -0.000629876 *begin_x*begin_y*begin_dx*begin_dy + -0.000158566 *lens_ipow(begin_x, 2)*lens_ipow(begin_dy, 2) + -0.992691 *lens_ipow(begin_lambda, 5) + -24.2045 *lens_ipow(begin_dx, 6) + -0.000371908 *lens_ipow(begin_y, 3)*lens_ipow(begin_dy, 3) + 1.04296e-08 *lens_ipow(begin_y, 5)*begin_dy + -75.6322 *lens_ipow(begin_dy, 6) + -0.0497655 *lens_ipow(begin_y, 2)*lens_ipow(begin_dy, 4) + -2.89598 *begin_y*lens_ipow(begin_dy, 5) + -1.92428 *begin_x*lens_ipow(begin_dx, 7) + -1673.67 *lens_ipow(begin_dx, 4)*lens_ipow(begin_dy, 4)*begin_lambda + 0.231251 *begin_x*begin_y*lens_ipow(begin_dx, 3)*lens_ipow(begin_dy, 3)*begin_lambda;
else
  out[4] = 0.0f;
} break;
