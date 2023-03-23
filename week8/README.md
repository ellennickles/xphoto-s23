# Week 8 • Automatic Photomontage

>...since captured, "painted," and synthesized pixel values can be combined seamlessly, the digital image blurs the customary distinctions between painting and photography and between mechanical and handmade pictures. A digital image may be part scanned photograph, part computer-synthesized shaded perspective, and part electronic "painting"--all smoothly melded into an apparently coherent whole. It may be fabricated from found files, disk litter, the detritus of cyberspace. Digital imagers give meaning and value to computational readymades by appropriation, transformation, reprocessing, and recombination; we have entered the age of electrobriocollage. (William J. Mitchell, *The Reconfigured Eye: Visual Truth in the Post-Photographic Era*, 4th printing, 2001)

## Questions

- What is a photomontage, and what is its history?
- What is the Surrealist idea of automatism?
- What are a couple of techniques to computationally generate photomontages?

## Class 1 • Tue Mar 21 • Share Week 7 Homework

### In class

- Homework review
- Schedule overview
- Start photomontages

### Resources

- [Slides](https://drive.google.com/drive/u/1/folders/1bp6ZJ3krohBmhxB699nj1edjueV8w-EO)

## Class 2 • Thu Mar 23 • Workshop

### In class

- Workshop: Automatic Photomontage

### Resources

- [Slides](https://drive.google.com/drive/u/1/folders/1bp6ZJ3krohBmhxB699nj1edjueV8w-EO)
- [The Case for
  Surrealism](https://www.khanacademy.org/humanities/art-1010/dada-and-surrealism/xdc974a79:surrealism/v/the-case-for-surrealism-the-art-assignment-pbs-digital-studios)
- Getting images
  - [Chrome Extension Image Downloader](https://chrome.google.com/webstore/detail/image-downloader/cnpniohnfphhjihaiiggeabnkjhpaldj?hl=en-US)
- Manipulating images with code
  - [Coding Train Videos 9.1-9.3](https://www.youtube.com/watch?v=o9sgjuh-CBM) on transformations using `translate()`, `rotate()`, `push()` and `pop()` ~40min
- Removing image backgrounds
  - [Remove a background in Preview app on Mac](https://support.apple.com/guide/preview/extract-an-image-or-remove-a-background-prvw15636/mac)
  - [How to Make Transparent Background in Paint 3D on Windows](https://asapguide.com/transparent-background-paint-3d/) (not tested, keep us posted on how this goes!)
  - [How to remove a background in Photoshop for beginners](https://www.youtube.com/watch?v=BQQqnn2uZv4)
- p5 demos
  - [Image basics](https://editor.p5js.org/enickles/sketches/tBWmUUAsx)
  - [Image modes](https://editor.p5js.org/enickles/sketches/mPo7JXHPl)
- p5 starter sketches
  - Auto photomontages (from one array)
    - [Scattered](https://editor.p5js.org/enickles/sketches/P07EioEZk)
    - [Half and half
      vertical](https://editor.p5js.org/enickles/sketches/eQumJMiBQ)
  - Auto photomontages (from two arrays)
    - [Background
      foreground](https://editor.p5js.org/enickles/sketches/frmyKKMfO)
    - [Half and half
      vertical](https://editor.p5js.org/enickles/sketches/QzVOaCc9M)
    - [Half and half
      horizontal](https://editor.p5js.org/enickles/sketches/rszLfBSvI)

## Assignment due night of Wed Mar 29

[How to get full credit on weekly assignments.](https://github.com/ellennickles/xphoto-s23#overview-of-assignments)

### PART 1 • EXPERIMENT & REFLECT

- Create at least three (3) **distinct** computationally-generated
  photomontages. Be intentional about your image choices to play with the
  juxtaposition of photographic elements, such as composition (formal qualities)
  along with subject, style, and meaning (content) (see [Elements of a
  Photograph](https://github.com/ellennickles/xphoto-s23/blob/main/resources/photograph-elements.md))
  for more ideas. Collect and prepare more images than in the
  class examples to generate more options for yourself.
- NOTE: Three (3) photomontages with the same images in random positions is not
  distinct. Consider the variety of photomontages presented in the reading due
  this week, as well as shown in class. Play with the different code-based
  techniques that we explored in our workshop.
- TIPS: Remember that in order to work with images in the p5 web editor, the
  file sizes should be less than 5MB, ideally as small in file size as possible
  without compromising image quality. When working with many images, make sure
  they are the same file type (all jpgs or pngs) and name the files with
  numbers to make easy to load into an array with a loop. See the example
  sketches above for reference.
- Post the images on your blog, and write a short reflection on your process and
  results. What do the images show? Why do you like them? What qualities do you
  like best (see [Elements of a
  Photograph](https://github.com/ellennickles/xphoto-s23/blob/main/resources/photograph-elements.md))?
  What did you have trouble with? What would you do differently next time?
  Describe the experience of finding and selecting the images? Do you feel like
  a photographer? What was surprising, enjoyable, or challenging? Be sure to
  link to your code.

### PART 2 • [READ](https://drive.google.com/drive/u/1/folders/1bp6ZJ3krohBmhxB699nj1edjueV8w-EO) & RESPOND

- Read *Making AI Art Responsibly: A Field Guide* by Emily Saltz, Lia Coleman,
  and Claire Leibowicz, for critical questions to consider when using AI
  approaches to create art.
- Read *Origins and Endpoints of Image Training Datasets Created “In the Wild”*
  by Adam Harvey on the origins of common AI image training datasets consisting
  of images of human faces.
- The Harvey paper briefly mentions the dataset, Flickr Faces High Quality
  (FFHQ). In two weeks, we will use FFHQ as part of our process to
  computationally generate images. Research the FFHQ dataset. What can you find
  out about it? What is it? Where is it from? Who made it and how? When and for
  what purpose(s) was it created? Address some of the concerns and
  questions posed in the Harvey paper and in the field guide to *Making AI Art
  Responsibly*? Are there any questions that are tricky to answer about FFHQ? Be
  sure to cite your research sources. Based on what you find, how do you feel
  about using this dataset in our course?
- Include at least one (1) question for discussion or further reflection.

### PART 3 • SUBMIT • [Assignment Form](https://forms.gle/bT1L7qHnrvmQ23sN9)

___

### Prepare for Next Week

- Install [Visual Studio Code](https://code.visualstudio.com/)
- After the installation, launch the application and navigate to *Extensions*
  (last menu item on the far left). Search for and install the extension:
  p5.vscode by Sam Lavigne
