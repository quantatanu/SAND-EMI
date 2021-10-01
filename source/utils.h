#include <vector>

int fitLinear(int n, const std::vector<double>& x, const std::vector<double>& y,
              double& a, double& b, double cov[][2], double& chi2)
{
  a = -999;
  b = -999;
  chi2 = -999;

  // if (x.size() != y.size()) return 1;

  cov[0][0] = -999;
  ;
  cov[0][1] = -999;
  cov[1][0] = -999;
  cov[1][1] = -999;

  double S1 = 0.;
  double SX = 0.;
  double SY = 0.;
  double SYX = 0.;
  double SXX = 0.;
  for (int i = 0; i < n; i++) {
    // std::cout << "XY: " <<  x.at(i) << " " <<  y.at(i) << std::endl;

    // if(isnan(x.at(i)) || isnan(y.at(i)))
    //  std::cout << x.at(i) << " " << y.at(i) << std::endl;

    S1 += 1.;
    SX += x.at(i);
    SY += y.at(i);
    SYX += x.at(i) * y.at(i);
    SXX += x.at(i) * x.at(i);
  }

  double D = S1 * SXX - SX * SX;

  if (D == 0.) return 2;

  // std::cout << "D: " << D << " " << S1 << " " << SX << " " << SY << " " <<
  // SXX << " " << SYX << std::endl;

  a = (SY * SXX - SX * SYX) / D;  // i.p. at x = 0
  b = (S1 * SYX - SX * SY) / D;   // tg(theta)

  // if(isnan(a) || isnan(b))
  //{
  //  std::cout << a << " " << b << " " << SY << " " << SXX << " " << SX << " "
  // << SYX << " " << S1 << " " << D << std::endl;
  //}

  // std::cout << a << " " << b << std::endl;

  cov[0][0] = SXX / D;
  cov[0][1] = -SX / D;
  cov[1][0] = -SX / D;
  cov[1][1] = S1 / D;

  chi2 = 0.0;

  for (int i = 0; i < n; i++) {
    chi2 += (y.at(i) - a - b * x.at(i)) * (y.at(i) - a - b * x.at(i));
  }

  chi2 /= n;

  return 0;
}



int fitCircle(int n, const std::vector<double>& x, const std::vector<double>& y, double &xc, double &yc, double &r, double &errr, double chi2[])
{
  xc = -999;
  yc = -999;
  r = -999;
  errr = -999;
  for(int i=0;i<6;i++){
    chi2[i] = -999;
  }
  if(x.size() != y.size())
    return 1;

  double sumx = 0, sumy = 0;                            // linear    terms
  double sumx2 = 0, sumy2 = 0, sumxy = 0;               // quadratic terms
  double sumxy2 = 0, sumx2y = 0, sumx3 = 0, sumy3 = 0;  // cubic     terms

  for (int i = 0; i < n; i++)
    {
      double xp = x.at(i);
      double yp = y.at(i);
      sumx   += xp;       sumy   += yp;
      sumx2  += xp*xp;    sumy2  += yp*yp;    sumxy += xp*yp;
      sumxy2 += xp*yp*yp; sumx2y += xp*xp*yp; sumx3 += xp*xp*xp; sumy3 += yp*yp*yp;
    }

  double a = n*sumx2 - sumx*sumx;
  double b = n*sumxy - sumx*sumy;
  double c = n*sumy2 - sumy*sumy;
  double d = 0.5*(n*sumxy2 - sumx*sumy2 + n*sumx3 - sumx*sumx2);
  double e = 0.5*(n*sumx2y - sumy*sumx2 + n*sumy3 - sumy*sumy2);

  if(a*c - b*b == 0.)
    return 2;

  xc = (d*c - b*e) / (a*c - b*b);
  yc = (a*e - b*d) / (a*c - b*b);

  double rMean = 0;
  double rrms = 0;

  for (int i = 0; i < n; i++)
    {
      double xp = x.at(i);
      double yp = y.at(i);
      double r2 = (xp - xc)*(xp - xc) + (yp - yc)*(yp - yc);

      rMean += sqrt(r2);
      rrms += r2;
    }

  rMean /= n;
  rrms /= n;
  r = rMean;

  errr = sqrt(rrms - rMean*rMean);

  chi2[0] = 0.0;
  chi2[1] = 0.0;
  chi2[2] = 0.0;
  chi2[3] = 0.0;
  chi2[4] = 0.0;
  chi2[5] = 0.0;

  for(int i = 0; i < n; i++)
    {
      chi2[0] += TMath::Abs((y.at(i) - yc)*(y.at(i) - yc) + (x.at(i) - xc) * (x.at(i) - xc) - r*r);
      chi2[1] += pow(sqrt(pow((y.at(i) - yc),2)+pow((x.at(i) - xc),2)) - r ,2);
    }

  chi2[0] /= n;
  chi2[1] /=n;
  chi2[2]= chi2[0]/r;
  chi2[3]=chi2[1]/r;
  chi2[4]= chi2[0]/r/r;
  chi2[5]=chi2[1]/r/r;
  /*
    std::cout << "==== ZY =====" << std::endl;

    for(int i = 0; i < n; i++)
    {
      std::cout << x.at(i) << " " << y.at(i) << std::endl;
    }

    std::cout << "---> " << xc << " " << yc << " " << r << " " << chi2 << std::endl;
  */

  return 0;
}
