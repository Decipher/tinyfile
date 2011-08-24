The tinyFile module provides an interface for Drag'n'Drop uploading to Mobile
Codes, so that a file can easily be shared from Desktop to Mobile devices.

tinyFile is/was an entry to the DrupalCon London 2011 Drupal Module Developer
Challenge.
- http://london2011.drupal.org/community/drupal-module-developer-challenge

tinyFile was written and is maintained by Stuart Clark (deciphered).
- http://stuar.tc/lark


Features
--------------------------------------------------------------------------------

- Integration with/Support for:
  - Custom Formatters module: Modify the Formatter used for the output.
  - Drag'n'Drop Uploads module: Pure javascript Drag'n'Drop upload interface.
  - Form Bock module: Embed the tinyFile interface as a block instead of a page.
  - Mobile Codes module: Customize the Mobile Code output using the Modile Codes
      module configuration, ability to use QR, Datamatrix or any other defined
      codes via any defined providers.
  - Redirect Click Bouncer module: Log all files downlaoded via the Mobile Code.
  - Shorten module: Shorten and mask the files url.
  - Short URL module: Use your own domain with the Shorten module.
  - Views module: Render the Statistics of all files downlaoded.
  - And many many more.


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


Usage
--------------------------------------------------------------------------------

Upload interface
  The tinyFile module utilizes a customized Node creation form so as not to add
  any unnecessary complexity to the site. By default the URL will be
  http://[www.yoursite.com/path/to/drupal]/node/add/tinyfile.

  It can also be displayed in a block region using the Form Block module, or, as
  setup in the above Drush Make installation profile, you can set the front page
  of your site to be the 'node/add/tinyfile'.


Statistics
  A default statistics View is supplied with the module, which can be accessed
  at the following url:
    http://[www.yoursite.com/path/to/drupal]/reports/tinyfile
