# Week 10 •  Generative Images 2 (GAN Training)

>The way that GANs work is actually via a two-player minimax game. One player, the generator, creates images or other kinds of data. The other player, the discriminator, recognizes these images as either real or fake. When we train the two models, we see that there’s adversarial competition over how to classify the fake samples produced by the generator. The generator tries to adapt the input to the discriminator to cause it to be misclassified, and the discriminator tries to correctly classify each of the fake inputs at fake. At the same time, the discriminator faces a non-adversarial component where it learns to recognize the real examples as real. (Ian Goodfellow, [Adversarial Machine Learning](https://www.youtube.com/watch?v=sucqskXRkss), ICLR invited talk, 2019)

## Questions

- What is the process for training a StyleGAN model in Google Colab?
- How do we evaluate / test / run inference on our trained model, i.e. generate
  images with it?

## Class 1 • Tue Apr 4 • Share Week 9 Homework, Workshop start

### In Class

- Homework review
- Workshop start: Generative Images 2 (GAN Training)

### Resources

- [Slides](https://drive.google.com/drive/u/1/folders/1bp6ZJ3krohBmhxB699nj1edjueV8w-EO)

## Class 2 • Thu Apr 6 • Workshop continued

### In class

- Workshop continued: Generative Images 2 (GAN Training)

### Resources

- [Slides](https://drive.google.com/drive/u/1/folders/1bp6ZJ3krohBmhxB699nj1edjueV8w-EO)

## Assignment due night of Mon Apr 10

[How to get full credit on weekly assignments.](https://github.com/ellennickles/xphoto-s23#overview-of-assignments)

### PART 1 • EXPERIMENT & REFLECT

- **Train** • Following the steps from class and in our [Colab
  Notebook](https://drive.google.com/drive/u/1/folders/1JPaDSHUZY488l9r3yDJCqpqHBH-otl_T),
  budget enough time this week to train (or continue training) a StyleGAN2-ADA
  model for as long as you can in Google Colab. Monitor the progress in the
  **results** folder by checking the *fakes* images. If you don't see any
  significant changes over time, it's probably time to stop training.
- **Generate** • No matter how far you get, find a .pkl file (aka *network
  snapshot*) with results that look interesting or promising to you in some way,
  and use that version of your trained model to generate images.
- **Share** • Post some the images on your blog. Write a short reflection on
  your process and results. For how long did you train your model? What do the
  images show? Anything surprising? Do you like them, and if so, what qualities
  do you like best (see [Elements of a
  Photograph](https://github.com/ellennickles/xphoto-s23/blob/main/resources/photograph-elements.md))?
  What did you have trouble with or what was confusing? Do you feel like a
  photographer?
- **Tips**
  - Make sure to run the configuration cells and save those changes before you
    run the training cell.
  - If you copy paths to filenames and folders, any spaces in those names will
    throw errors.
  - Ticks can take a looong time. The amount of time can depend on your GPU and
    your image resolution (512 or 1024). It’s normal for a tick to take between
    20-40min based on those factors.
  - If you resume a training session, you need to update two (2) things:
    - `resume_from`: the a path to your latest .pkl file (network snapshot)
    - `aug_strength`: you can find this number in the log.txt file in the
      results folder OR in the Notebook itself, in the training cell, so you can
      start from where you left off (if you can't find it at all, don't worry
      about it).
  - Every time you start or resume a training session, a new folder will be
    created in the **colab-sg2-ada-pytorch** > **stylegan2-ada-pytorch** >
    **results** folder in your Google Drive.
  - Monitor the training progress by looking at the "fakes" images in that
    **results** folder.
  - In Part 3 of the Notebook, you can generate images from any .pkl
    file (network snapshot). Try generating some images from early ones and
    compare to those to results from later .pkl files after you've trained the
    model for awhile.
  - If you need to, you can always go back the original notebook in our
    [Workshop: GAN Training
    Materials](https://drive.google.com/drive/u/1/folders/1JPaDSHUZY488l9r3yDJCqpqHBH-otl_T)
    folder to start fresh.

### PART 2 • [READ](https://drive.google.com/drive/u/1/folders/1bp6ZJ3krohBmhxB699nj1edjueV8w-EO) & RESPOND

- Next week Zach Nader will visit our class. To prepare please complete the
  following:
  - Review his [website](https://www.zachnader.art/) and
    [Instagram](https://www.instagram.com/znader/)
  - Read the interview of Zach by Julia Wilson, "How Images Program Our
    World: Zach Nader on ‘psychic pictures’" for some context on his art
    practice.
  - Read "Petrified Photography" by Alexander R. Galloway
- Respond
  - What connections can you draw between these two readings? How might the
    Galloway piece relate to Zach’s work?
  - Include in your response at least one (1) question to ask Zach during his
    visit.
  
### PART 3 • SUBMIT • [Assignment Form](https://forms.gle/bT1L7qHnrvmQ23sN9)
