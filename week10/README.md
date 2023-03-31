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

- **Train** • Following the steps from class and in our Colab Notebook, budget
  enough time this week to train (or continue training) a StyleGAN2-ADA model
  for as long as you can in Google Colab. Monitor the progress in the `results`
  folder by checking the *fakes* images. If you don't see any significant
  changes over time, it's probably time to stop training.
- **Generate** • No matter how far you get, find a .pkl file (aka *network
  snapshot*) with results that look interesting or promising to you in some way,
  and use that version of your trained model to generate images.
- **Share** • Post some the images on your blog. Write a short reflection on
  your process and results. For how long did you train your model? What do the
  images show? Anything surprising? Do you like them, and if so, what qualities
  do you like best (see [Elements of a
  Photograph](https://github.com/ellennickles/xphoto-s22/blob/main/resources/photograph-elements.md))?
  What did you have trouble with or what was confusing? Do you feel like a
  photographer?

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
  - In your own words...
- Include in your response at least one (1) question to ask Zach during his
  visit.

"gives a very early history of how people were exploding viewpoint and the photograph much earlier than is often discussed. I read it with my undergrads and think it is a fun, accessible text. I think it also nicely gives an early approach of being more playful and flexible with photographic information, which how it relates to my work most easily."

### PART 3 • SUBMIT • [Assignment Form](https://forms.gle/bT1L7qHnrvmQ23sN9)
