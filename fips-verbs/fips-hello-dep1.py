"""test fips verb import"""
from mod import log

#-------------------------------------------------------------------------------
def run(fips_dir, proj_dir, args) :
    log.info("fips-hello-dep1 test verb executed!")

#-------------------------------------------------------------------------------
def help() :
    log.info(log.YELLOW +
            "fips fips-hello-dep1\n"
            + log.DEF +
            "    test another imported project verb")
    
