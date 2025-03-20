import os
from argparse import ArgumentParser as ap

parser = ap()

parser.add_argument( "-r", type=str, help='GENIE tag', default='N24_20i_02_11b')
#parser.add_argument( "-o", type=str, help='Time (s) to sleep between calls', default=)

args = parser.parse_args()

fout = open('file_list_' + args.r + '.txt', 'w')


getnames = os.popen("samweb list-definition-files prod_genie_R25-02-27-prod6genie.b_nd_genie_" + args.r + "_nonswap_fhc_nova_v08_full_v1_miniprod6-2_geniephyopt_nominal")
filenames = getnames.readlines()
out_names = []
for fn in filenames:
  fn = fn.rstrip()
  fileloc = os.popen(f"samweb locate-file {fn}")
  fileloc = fileloc.readlines()
  fileloc = fileloc[0].split(":")
  fileloc = fileloc[1].split("(")
  print (fileloc[0]+"/"+fn)
  out_names.append(fileloc[0]+"/"+fn +"\n")

fout.writelines(out_names)
