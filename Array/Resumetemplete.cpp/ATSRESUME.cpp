\documentclass[10pt, letterpaper]{article}

% Packages:
\usepackage[
    ignoreheadfoot, % set margins without considering header and footer
    top=2 cm, % seperation between body and page edge from the top
    bottom=2 cm, % seperation between body and page edge from the bottom
    left=2 cm, % seperation between body and page edge from the left
    right=2 cm, % seperation between body and page edge from the right
    footskip=1.0 cm, % seperation between body and footer
    % showframe % for debugging 
]{geometry} % for adjusting page geometry
\usepackage{titlesec} % for customizing section titles
\usepackage{tabularx} % for making tables with fixed width columns
\usepackage{array} % tabularx requires this
\usepackage[dvipsnames]{xcolor} % for coloring text
\definecolor{primaryColor}{RGB}{0, 0, 0} % define primary color
\usepackage{enumitem} % for customizing lists
\usepackage{fontawesome5} % for using icons
\usepackage{amsmath} % for math
\usepackage[
    pdftitle={John Doe's CV},
    pdfauthor={John Doe},
    pdfcreator={LaTeX with RenderCV},
    colorlinks=true,
    urlcolor=primaryColor
]{hyperref} % for links, metadata and bookmarks
\usepackage[pscoord]{eso-pic} % for floating text on the page
\usepackage{calc} % for calculating lengths
\usepackage{bookmark} % for bookmarks
\usepackage{lastpage} % for getting the total number of pages
\usepackage{changepage} % for one column entries (adjustwidth environment)
\usepackage{paracol} % for two and three column entries
\usepackage{ifthen} % for conditional statements
\usepackage{needspace} % for avoiding page brake right after the section title
\usepackage{iftex} % check if engine is pdflatex, xetex or luatex

% Ensure that generate pdf is machine readable/ATS parsable:
\ifPDFTeX
    \input{glyphtounicode}
    \pdfgentounicode=1
    \usepackage[T1]{fontenc}
    \usepackage[utf8]{inputenc}
    \usepackage{lmodern}
\fi

\usepackage{charter}

% Some settings:
\raggedright
\AtBeginEnvironment{adjustwidth}{\partopsep0pt} % remove space before adjustwidth environment
\pagestyle{empty} % no header or footer
\setcounter{secnumdepth}{0} % no section numbering
\setlength{\parindent}{0pt} % no indentation
\setlength{\topskip}{0pt} % no top skip
\setlength{\columnsep}{0.15cm} % set column seperation
\pagenumbering{gobble} % no page numbering

\titleformat{\section}{\needspace{4\baselineskip}\bfseries\large}{}{0pt}{}[\vspace{1pt}\titlerule]

\titlespacing{\section}{
    % left space:
    -1pt
}{
    % top space:
    0.3 cm
}{
    % bottom space:
    0.2 cm
} % section title spacing

\renewcommand\labelitemi{$\vcenter{\hbox{\small$\bullet$}}$} % custom bullet points
\newenvironment{highlights}{
    \begin{itemize}[
        topsep=0.10 cm,
        parsep=0.10 cm,
        partopsep=0pt,
        itemsep=0pt,
        leftmargin=0 cm + 10pt
    ]
}{
    \end{itemize}
} % new environment for highlights


\newenvironment{highlightsforbulletentries}{
    \begin{itemize}[
        topsep=0.10 cm,
        parsep=0.10 cm,
        partopsep=0pt,
        itemsep=0pt,
        leftmargin=10pt
    ]
}{
    \end{itemize}
} % new environment for highlights for bullet entries

\newenvironment{onecolentry}{
    \begin{adjustwidth}{
        0 cm + 0.00001 cm
    }{
        0 cm + 0.00001 cm
    }
}{
    \end{adjustwidth}
} % new environment for one column entries

\newenvironment{twocolentry}[2][]{
    \onecolentry
    \def\secondColumn{#2}
    \setcolumnwidth{\fill, 4.5 cm}
    \begin{paracol}{2}
}{
    \switchcolumn \raggedleft \secondColumn
    \end{paracol}
    \endonecolentry
} % new environment for two column entries

\newenvironment{threecolentry}[3][]{
    \onecolentry
    \def\thirdColumn{#3}
    \setcolumnwidth{, \fill, 4.5 cm}
    \begin{paracol}{3}
    {\raggedright #2} \switchcolumn
}{
    \switchcolumn \raggedleft \thirdColumn
    \end{paracol}
    \endonecolentry
} % new environment for three column entries

\newenvironment{header}{
    \setlength{\topsep}{0pt}\par\kern\topsep\centering\linespread{1}
}{
    \par\kern\topsep
} % new environment for the header

\newcommand{\placelastupdatedtext}{% \placetextbox{<horizontal pos>}{<vertical pos>}{<stuff>}
  \AddToShipoutPictureFG*{% Add <stuff> to current page foreground
    \put(
        \LenToUnit{\paperwidth-2 cm-0 cm+0.05cm},
        \LenToUnit{\paperheight-1.0 cm}
    ){\vtop{{\null}\makebox[0pt][c]{
        \small\color{gray}\textit{Last updated in September 2024}\hspace{\widthof{Last updated in September 2024}}
    }}}%
  }%
}%

% save the original href command in a new command:
\let\hrefWithoutArrow\href

% new command for external links:


\begin{document}
    \newcommand{\AND}{\unskip
        \cleaders\copy\ANDbox\hskip\wd\ANDbox
        \ignorespaces
    }
    \newsavebox\ANDbox
    \sbox\ANDbox{$|$}

    \begin{header}
        \fontsize{25 pt}{25 pt}\selectfont Ashwin Dotwal

        \vspace{5 pt}

        \normalsize
        \mbox{\hrefWithoutArrow{mailto:ashwindotwal011@gmail.com}{ashwindotwal011@gmail.com}}%
        \kern 5.0 pt%
        \AND%
        \kern 5.0 pt%
        \mbox{\hrefWithoutArrow{tel:+91-6260476245}{6260476245}}%
        \kern 5.0 pt%
        \AND%
        \kern 5.0 pt%
        \mbox{\hrefWithoutArrow{https://linkedin.com/in/ashwin-dotwal-b21218228}{linkedin.com/in/ashwin-dotwal}}%
        \kern 5.0 pt%
        \AND%
        \kern 5.0 pt%
        \mbox{\hrefWithoutArrow{https://github.com/Ashwin-Dotwal}{github.com/Ashwin-Dotwal}}%
    \end{header}

    \vspace{5 pt - 0.3 cm}

    \section{Professional Summary}

Motivated Computer Science student with a solid foundation in web development and DSA. Skilled in building responsive web apps using MERN stack. Quick learner with strong problem-solving skills, teamwork, and adaptability. Eager to gain hands-on experience through impactful projects and internships.

\vspace{0.1cm}

    \section{Education}



        
        \begin{twocolentry}{
            Aug 2021 – June 2025
        }
            \textbf{IES IPS Academy, Indore }\end{twocolentry}

        \vspace{0.1 cm}
             B.Tech in Computer Science (CGPA: 7.3)
       
           \vspace{0.1cm}
          \begin{twocolentry}{
             June 2020 – May 2021
        }
            \textbf{Garments Public School, Indore } \end{twocolentry}

        \vspace{0.1 cm}
        Higher Secondary School Certificate Examination (Percent: 83.6)
        \vspace{0.1 cm}

          \begin{twocolentry}{
            June 2018 – May 2019
        }
            \textbf{Garments Public School, Indore} \end{twocolentry}

        \vspace{0.1 cm}
         High School Certificate Examination (Percent: 84.6)
     \vspace{0.1 cm}

    
    \section{Skills}

    \textbf{MERN Stack Devloper:}

\vspace{0.1cm}

\textbf{Frontend:} React.js, HTML5, CSS3, JavaScript (ES6+), Tailwind CSS

\vspace{0.1cm}
\textbf{Backend:} Node.js, Express.js

\vspace{0.1cm}
\textbf{Database:} MongoDB, Mongoose

\vspace{0.1cm}
\textbf{Other Tools:} Git, GitHub


\vspace{0.1cm}
 
\textbf{Data Structures & Algorithms}: Strong problem-solving and foundational DSA knowledge
\vspace{0.1cm}

\textbf{Languages:} C, C++

\vspace{0.1cm}
\textbf{CS Core:} OOP, Operating Systems, Computer Networks, DBMS
        



    
    \section{Internship}
  \begin{twocolentry}{
            June 2024 – Sep 2024
        }
            \textbf{Internship Studio }   \end{twocolentry}
            \vspace{0.1 cm}
      During my internship at the studio, I worked extensively 
with HTML, CSS, JavaScript, and React.js to Create E-commerce Web-site.

      \section{Projects}
  \begin{twocolentry}{Jan 2025 -- May 2025}
   \textbf{Prescripto – Doctor Appointment App : }\end{twocolentry}
   Developed a responsive web application enabling users to book, manage, and track doctor appointments. Implemented secure user authentication, real-time appointment scheduling, and role-based dashboards for patients and doctors using MongoDB, Express.js, React.js, and Node.js.




        
        \begin{twocolentry}{
           Aug 2024 – Oct 2024
        }
            \textbf{Football Analysis System : }\end{twocolentry}

        \vspace{0.1 cm}
     

             Developed a Comprehensive Football Analysis System to analysis team and player performance 
Using historical match data .This system provided insights into key performance indicators such
As possession , passing accuracy, player heat maps, goal-scoring patterns, and defensive
Strategies.
               
         


        \vspace{0.1cm}



     

         \begin{twocolentry}{
            Dec 2024
        }
         \textbf{Real-Estate Website:}\end{twocolentry}

        \vspace{0.1 cm}

        Built a dynamic platform for listing, searching, and managing real estate properties. Integrated features like property filtering, user authentication, and admin controls using MongoDB, Express.js, React.js, and Node.js. Focused on responsive UI and seamless user experience for buyers, sellers, and agents.


       


      

       \section{Certificate}

       \begin{twocolentry}{
            Sep 2024
        }
        
            \textbf{ AWS ACADEMY :}  AWS Academy Cloud Foundations 
            \end{twocolentry}
          
        \vspace{0.1 cm}
             

          \begin{twocolentry}{
           Dec-2024
        }
        
            \textbf{ Great Learning :} AWS For Beginners  \end{twocolentry}

        \vspace{0.1 cm}
       
       
        
      

        \vspace{0.1 cm}

      


    

\end{document}