The tinyFile module provides an interface for Drag'n'Drop uploading to Mobile
Codes, so that a file can easily be shared from Desktop to Mobile devices.

tinyFile is/was an entry to the DrupalCon London 2011 Drupal Module Developer
Challenge.
- http://london2011.drupal.org/community/drupal-module-developer-challenge

tinyFile was written and is maintained by Stuart Clark (deciphered).
- http://stuar.tc/lark


Drush Make
--------------------------------------------------------------------------------

For the purposes of a demonstration/quick test setup for the DrupalCon London
2011 Drupal Module Developer Challenge and for general ease of setup, there is
a Drush Make file that downloads all necessary modules along with an
Installation Profile.

If you have Drush and Drush Make installed on your system, take the following
steps:

  1. Run the following Drush Make command:
       drush make http://dl.dropbox.com/u/1804559/tinyFile.make [destination]

     Note: Replace '[destination]' with the directory name you wish the site to
           be installed in.

  2. Install the Drupal site as per usual, using the following style path to
     quickly select the 'tinyFile demonstration' installation profile:
       http://[www.yoursite.com/path/to/drupal]/install.php?profile=tinyfile_demo
