for file in $1 ; do timeout 3 gs -dBATCH -dNOPAUSE -dNODISPLAY $file ; done > /tmp/gsresults
