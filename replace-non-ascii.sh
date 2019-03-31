sed 's/é/e/' $1 | \
  sed "s/’/'/g" | \
  sed 's/—/-/g' | \
  sed "s/‘/'/g" | \
  sed "s/ü/u/g" | \
  sed "s/ö/o/g" | \
  sed "s/í/i/g" | \
  sed "s/ë/e/g" | \
  sed "s/°/*/g" | \
  sed "s/á/a/g" | \
  sed "s/––/-/g" | \
  sed "s/−/-/g" | \
  sed "s/–/-/g" | \
  sed "s/£/L/g" | \
  sed "s/č/c/g" | \
  sed "s/´/'/g" | \
  sed "s/ñ/n/g" | \
  sed "s/è/e/g" | \
  sed "s/š/s/g" | \
  sed "s/ä/a/g" | \
  sed "s/…/.../g"
